N = gets.to_i
P = gets.chomp.split.map &:to_i
Q = P.each_with_index.map {|p, i| [p, i + 1] }.sort_by(&:first).map {|p| p[1] }
puts Q.join(" ")
