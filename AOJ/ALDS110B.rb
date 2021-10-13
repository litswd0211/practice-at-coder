N = gets.to_i
P = Array.new(N+1)
M = Array.new(N) { Array.new(N) }

N.times do |i|
  P[i], P[i+1] = gets.chomp.split.map(&:to_i)
  M[i][i] = 0 # 長さ0の計算量は0
end

(1..N).each do |l|
  (0..(N-l-1)).each do |i|
    j = i + l
    M[i][j] = Float::INFINITY
    (i...j).each do |k|
      M[i][j] = [M[i][j], M[i][k] + M[k+1][j] + P[i-1] * P[k] * P[j]].min
    end
  end
end

puts M[0][N-1]