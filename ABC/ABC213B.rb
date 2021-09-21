N = gets.to_i
A = gets.chomp.split.map &:to_i
players = {}
A.each_with_index { players[_2 + 1] = _1 }
puts players.sort_by {_2}.to_a[-2][0]