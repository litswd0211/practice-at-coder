N = gets.to_i
T = N.times.map { gets.chomp.split.map(&:to_i) }
tt = {}
T.each {|t| tt[t[0]] = t[2..-1] }

Node = Struct.new(:id, :parent, :children) do
  def depth
    p = parent
    d = 0
    while p != nil
      p = p.parent
      d += 1
    end
    d
  end

  def type
    return "root" if parent == nil
    return "leaf" if children.empty?

    "internal node"
  end
end

nodes = tt.map {|id, c| [id, Node.new(id, nil, [])] }.to_h

tt.each do |id, c|
  parent = nodes[id]
  children = nodes.values_at(*c)
  parent.children = children
  children.each {|cc| cc.parent = parent }
end

nodes.sort.each do |_, n|
  puts "node #{n.id}: parent = #{n.parent&.id || -1}, depth = #{n.depth}, #{n.type}, [#{n.children.map(&:id).join(", ")}]"
end