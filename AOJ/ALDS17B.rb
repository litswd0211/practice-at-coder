N = gets.to_i

Node = Struct.new(:p, :l, :r, :dep, :s, :h) do
  def t
    return "root" if p == -1
    return "leaf" if l == -1 && r == -1
    "internal node"
  end

  def deg
    ([l, r] - [-1]).size
  end

  def s(id)
    return -1 if p == -1
    pn = T[p]
    return pn.l if pn.l != -1 && pn.l != id
    return pn.r if pn.r != -1 && pn.r != id
    -1
  end

  def to_s(id)
    "node #{id}: parent = #{p}, sibling = #{s(id)}, degree = #{deg}, depth = #{dep}, height = #{h}, #{t}"
  end
end

T = N.times.map do
  id, l, r = gets.chomp.split.map(&:to_i)
  [id, Node.new(-1, l, r)]
end.to_h

T.each do |id, n|
  T[n.l]&.p = id
  T[n.r]&.p = id
end

def set_h(id)
  h1 = h2 = 0
  h1 = set_h(T[id].r) + 1 if T[id].r != -1
  h2 = set_h(T[id].l) + 1 if T[id].l != -1
  T[id].h = [h1, h2].max
end

def set_dep(id, d)
  return if id == -1
  T[id]&.dep = d
  set_dep(T[id].l, d + 1)
  set_dep(T[id].r, d + 1)
end

root = T.find {|id, n| n.p == -1 }[0]

set_h(root)
set_dep(root, 0)

puts T.sort.map {|id, n| n.to_s(id) }