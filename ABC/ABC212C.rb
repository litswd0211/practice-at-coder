N, M = gets.chomp.split.map(&:to_i)
A = gets.chomp.split.map(&:to_i).sort
B = gets.chomp.split.map(&:to_i).sort

ai = bi = 0
ans = 0xffffffffffffffff

while ai < N && bi < M
  ans = [ans, (A[ai] - B[bi]).abs].min
  if A[ai] < B[bi]
    ai += 1
  else
    bi += 1
  end
end

puts ans
