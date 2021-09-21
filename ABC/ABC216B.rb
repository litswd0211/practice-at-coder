n = gets.to_i
sts = n.times.map { gets.chomp }
puts sts.uniq.size != sts.size ? "Yes" : "No"