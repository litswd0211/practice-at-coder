S, T = gets.chomp.split.map &:to_i

ans = (0..S).to_a.repeated_permutation(3)
ans = ans.select { _1.sum <= S }
ans = ans.select { _1.inject(:*) <= T }

puts ans.size