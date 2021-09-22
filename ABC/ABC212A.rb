
A, B = gets.chomp.split.map &:to_i

if 0 < A && B == 0
  puts "Gold"
elsif A == 0 && 0 < B
  puts "Silver"
elsif 0 < A && 0 < B
  puts "Alloy"
end
