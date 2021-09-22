X = gets.chomp.chars.map &:to_i

if X.uniq.size == 1
  puts "Weak"
  exit
end

if (0..2).all? do |i|
    crr = X[i]
    nxt = X[i].next
    nxt = 0 if nxt == 10
    X[i + 1] == nxt
  end

  puts "Weak"
  exit
end

puts "Strong"
