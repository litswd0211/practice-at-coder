N = gets.to_i

N.times do
  x = [nil] + gets.chomp.chars
  y = [nil] + gets.chomp.chars

  dp = Array.new(x.size) { Array.new(y.size) }
  (x.size).times {|xx| dp[xx][0] = 0 }
  (y.size).times {|yy| dp[0][yy] = 0 }

  (1...x.size).each do |xx|
    (1...y.size).each do |yy|
      if x[xx] == y[yy]
        dp[xx][yy] = dp[xx-1][yy-1] + 1
      else
        dp[xx][yy] = [dp[xx-1][yy], dp[xx][yy-1]].max
      end
    end
  end

  puts dp[x.size-1][y.size-1]
end
