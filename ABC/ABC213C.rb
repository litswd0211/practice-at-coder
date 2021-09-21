H, W, N = gets.chomp.split.map &:to_i
AB = N.times.map { gets.chomp.split.map &:to_i }

ab = AB.dup
newa = AB.map {|a, b| a }.uniq.sort.each_with_index.map {|a, i| [a, i + 1] }.to_h
newb = AB.map {|a, b| b }.uniq.sort.each_with_index.map {|b, i| [b, i + 1] }.to_h

ans = []
ab.each do |a, b|
  ans << "#{newa[a]} #{newb[b]}"
end
puts ans
