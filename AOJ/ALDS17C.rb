N = gets.to_i
tt = N.times.map { gets.chomp.split.map(&:to_i) }

Node = Struct.new(:pr, :l, :r)

T = tt.map {|t| [t[0], Node.new(-1, t[1], t[2])] }.to_h

T.each do |i, n|
  T[n.l]&.pr = i
  T[n.r]&.pr = i
end

ri = T.find {|i, t| t.pr == -1 }[0]

puts "Preorder"

def preorder(i, arr)
  arr << i
  preorder(T[i].l, arr) if T[i].l != -1
  preorder(T[i].r, arr) if T[i].r != -1
end

po = []
preorder(ri, po)
puts " " + po.join(" ")

puts "Inorder"

def inorder(i, arr)
  inorder(T[i].l, arr) if T[i].l != -1
  arr << i
  inorder(T[i].r, arr) if T[i].r != -1
end

io = []
inorder(ri, io)
puts " " + io.join(" ")

puts "Postorder"

def postorder(i, arr)
  postorder(T[i].l, arr) if T[i].l != -1
  postorder(T[i].r, arr) if T[i].r != -1
  arr << i
end

poo = []
postorder(ri, poo)
puts " " + poo.join(" ")
