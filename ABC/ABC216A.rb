x, y = gets.chomp.split(".").map(&:to_i)
if 0 <= y && y <= 2
    puts "#{x}-"
elsif 3 <= y && y <= 6
    puts x
elsif 7 <= y && y <= 9
    puts "#{x}+"
end