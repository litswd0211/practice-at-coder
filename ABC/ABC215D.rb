require "prime"

N, M = gets.chomp.split.map &:to_i
A = gets.chomp.split.map(&:to_i).uniq
ap = A.flat_map {|a|a.prime_division.map{_1[0]}}.uniq

ans = (1..M).reject {|m| m.prime_division.map{_1[0]}.any? {|mp| ap.include?(mp) } }
puts [ans.size, ans]
