S = gets.chomp.chars
MOD = 10**9+7
T = "chokudai".chars

dp = Array.new(S.size+1) { Array.new(T.size+1, 0) }
(S.size+1).times.each {|i| dp[i][0] = 1 }

(1..S.size).each do |i|
  (1..T.size).each do |j|
    if S[i-1] == T[j-1]
      dp[i][j] = dp[i-1][j] + dp[i-1][j-1]
    else
      dp[i][j] = dp[i-1][j]
    end
  end
end

puts dp[S.size][T.size] % MOD
