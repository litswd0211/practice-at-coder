N, X = gets.chomp.split.map(&:to_i)
A = gets.chomp.split.map(&:to_i)

puts A.sum - (A.size / 2) <= X ? "Yes" : "No"