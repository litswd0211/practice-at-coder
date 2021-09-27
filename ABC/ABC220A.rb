A, B, C = gets.chomp.split.map(&:to_i)

puts C.step(by: C, to: 1000).find {|c| c >= A && c <= B } || -1