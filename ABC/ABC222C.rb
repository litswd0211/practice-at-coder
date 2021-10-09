N, M = gets.chomp.split.map(&:to_i)

# A[i][j] i = 人, j = ラウンド
A = (2 * N).times.map { gets.chomp.chars }

#pp A

# res[i] = win 
res = (2 * N).times.map {[_1, 0]}.to_h

#pp res

def jan(m, o)
  return 1 if m == "G" && o == "C"
  return 1 if m == "C" && o == "P"
  return 1 if m == "P" && o == "G"

  return 0
end

M.times do |r|
  res.each_slice(2) do |(ai, _), (bi, _)|
    ra = A[ai][r]
    rb = A[bi][r]
    res[ai] += jan(ra, rb)
    res[bi] += jan(rb, ra)
  end

  res = res.sort_by {|i, w| [-w, i]}.to_h
end

puts res.keys.map(&:next)