H = gets.to_i
Heap = [nil] + gets.chomp.split.map(&:to_i)

(1..H).each do |i|
  str = "node #{i}:"
  h = Heap[i]
  str += " key = #{h}, "
  p = Heap[i/2]
  str += "parent key = #{p}, " if p
  l = Heap[2*i]
  str += "left key = #{l}, " if l
  r = Heap[2*i+1]
  str += "right key = #{r}, " if r

  puts str
end
