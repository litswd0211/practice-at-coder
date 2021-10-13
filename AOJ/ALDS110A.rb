N = gets.to_i

dp = []

N.next.times do |i|
  if i == 0 || i == 1
    dp[i] = 1
  else
    dp[i] = dp[i-1] + dp[i-2]
  end
end

puts dp[N]