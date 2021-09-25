N, A, X, Y = gets.chomp.split.map(&:to_i)

puts [A, N].min * X + [N - A, 0].max * Y