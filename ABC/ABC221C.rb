N = gets.chomp.chars.sort.reverse
A, B = N.partition.with_index {_2.even?}

#pp A
#pp B

[A.size, B.size].min.times.each do |i|
  if A[i] != B[i]
    A[i], B[i] = B[i], A[i]
    break
  end
end

#pp A
#pp B

puts A.join.to_i * B.join.to_i