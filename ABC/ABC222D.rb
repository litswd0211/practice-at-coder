N = gets.to_i
A = gets.chomp.split.map(&:to_i)
B = gets.chomp.split.map(&:to_i)
MOD = 998244353
M = 3001

dp = Array.new(M, 0)
dp[0] = 1

N.times do |i|
  ai = A[i]
  bi = B[i]
  s = dp[0..bi].sum % MOD
  bi.downto(ai) do |j|
    tmp = dp[j]
    s %= MOD
    dp[j] = s
    s -= tmp
  end

  ai.times do |j|
    dp[j] = 0
  end
end

puts dp.sum % MOD
