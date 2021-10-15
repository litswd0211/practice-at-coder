N = gets.to_i

M = Array.new(N) { Array.new(N) }
N.times do |i|
  gets.chomp.split.map(&:to_i).each_with_index do |w, j|
    M[i][j] = w != -1 ? w : Float::INFINITY
  end
end

d = Array.new(N, Float::INFINITY)
p = Array.new(N, -1)
c = Array.new(N, false)

d[0] = 0

while u = N.times.select {|i| !c[i] }.min_by {|i| d[i] }
  c[u] = true

  M[u].each_with_index do |w, v|
    next if w == Float::INFINITY
    next if c[v]
    next unless d[v] > w

    d[v] = M[u][v]
    p[v] = u
  end
end

puts N.times.select {|i| p[i] != -1 }.sum {|i| M[i][p[i]] }

