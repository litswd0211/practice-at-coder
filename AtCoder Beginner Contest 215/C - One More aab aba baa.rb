S, K = gets.chomp.split
puts S.chars.to_a.permutation.uniq.sort.to_a[K.to_i - 1].join
