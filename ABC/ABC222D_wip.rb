N = gets.to_i
A = gets.chomp.split.map(&:to_i)
B = gets.chomp.split.map(&:to_i)
MOD = 998244353
MAX = 3000

dp = Array.new(N+1) { Array.new(MAX+1, 0) }

dp[0][0] = 1

(N+1).times do |i|
  ai = A[i]
  bi = B[i]
  MAX.times do |j|
    crr = dp[i][j]
    dp[i][j+1] += crr
    if i != N && j >= ai && j <= bi
      dp[i+1][j] += crr
    end
  end
  #if i != N
  #  (A[i]..B[i]).each do |j|
  #    dp[i+1][j] += dp[i][j]
  #  end
  #end
end

puts dp[N][MAX] % MOD
