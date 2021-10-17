S = gets.chomp.chars

puts (S*3).each_cons(S.size).minmax.map(&:join)

