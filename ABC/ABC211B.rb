S = readlines.map(&:chomp)

puts S.uniq.size == 4 ? "Yes" : "No"