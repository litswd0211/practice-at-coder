N = gets.to_i
A = gets.chomp.split.map(&:to_i)

sw = 0
(0...N).each do |i|
  minj = i
  (i...N).each do |j|
    minj = j if A[minj] > A[j]
  end
  if i != minj
    A[i], A[minj] = A[minj], A[i]
    sw += 1
  end
end

puts A.join(" ")
puts sw
