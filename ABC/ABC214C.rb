N = gets.to_i
S = gets.chomp.split.map &:to_i
T = gets.chomp.split.map &:to_i

dp = []
dp[0] = 0

(N*2).times do |i|
  cur = i % N
  nex = (i + 1) % N

  dp[nex] = [T[nex], dp[cur].to_i + S[cur]].min
end

puts dp

#ans.dup.each_with_index.map {[_2, _1] }.sort_by { _2 }.each do |i, t|
#  N.times do |cur|
#    curi = (i + cur) % N
#    nexti = (curi + 1) % N
#    ans[nexti] = [ans[nexti], ans[curi] + S[curi]].min
#  end
#end
#
#puts ans
