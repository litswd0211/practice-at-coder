class UniteFindSum
    attr_accessor :nodes, :values

    def initialize(values)
        @nodes = Array.new(values.size, -1)
        @values = values.dup
    end
    
    def root(i)
        @nodes[i] < 0 ? i : @nodes[i] = root(@nodes[i])
    end

    def unite(x, y)
        x, y = root(x), root(y)
        return if x == y

        x, y = y, x if @nodes[y] > @nodes[x]
        @nodes[x] += @nodes[y]
        @nodes[y] = x
        @values[x] += @values[y]
        @values[y] = 0
    end

    def sum(i)
        @values[root(i)]
    end
end

L, Q = gets.split.map(&:to_i)
CX = Q.times.map { gets.split.map(&:to_i) }

cts = [0] + CX.map {|c, x| x if c == 1 }.compact.sort + [L]
ls = cts.each_cons(2).map { _2 - _1 }
ufs = UniteFindSum.new(ls)

ans = []
CX.reverse.map do |c, x|
    i = cts.bsearch_index { _1 >= x } - 1
    if c == 1
        ufs.unite(i, i + 1)
    else
        ans.unshift(ufs.sum(i))
    end
end
puts ans
