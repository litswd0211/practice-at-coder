N = gets.to_i
A = gets.chomp.split.map(&:to_i)
X = gets.to_i

asum = A.sum
cnt = X / asum
rem = X % asum

cur = 0
remcnt = 0
A.each do |a|
  cur += a
  remcnt += 1
  break if cur > rem
end

puts (cnt * A.size) + remcnt
