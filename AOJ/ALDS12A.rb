N = gets.to_i
A = gets.chomp.split.map(&:to_i)

flag = true
excnt = 0

while flag
  flag = false
  (1..N-1).reverse_each do |i|
    if A[i] < A[i-1]
      A[i], A[i-1] = A[i-1], A[i]
      flag = true
      excnt += 1
    end
  end
end

puts A.join(" ")
puts excnt