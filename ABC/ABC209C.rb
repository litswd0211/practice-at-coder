N = gets.to_i
C = gets.chomp.split.map(&:to_i).sort
MOD = 10**9 + 7

ans = 1
N.times do |i|
  ans *= [C[i] - i, 0].max
  ans %= MOD
end

puts ans