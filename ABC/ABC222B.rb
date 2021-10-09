N, P = gets.chomp.split.map(&:to_i)
A = gets.chomp.split.map(&:to_i)

puts A.count {_1 < P}