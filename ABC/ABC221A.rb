A, B = gets.chomp.split.map(&:to_i)

diff = A - B
if diff > 0
  puts 32 ** diff
else
  puts 1
end
