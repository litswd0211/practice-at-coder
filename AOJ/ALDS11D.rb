N = gets.to_i
R = N.times.map { gets.to_i }

maxv = 10**9 * -1
minv = R[0]

(1..(N-1)).each do |j|
  maxv = [R[j] - minv, maxv].max
  minv = [R[j], minv].min
end

puts maxv
