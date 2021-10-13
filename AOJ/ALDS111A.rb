N = gets.to_i
Adj = {}

N.times do
  aa = gets.chomp.split.map(&:to_i)
  u, k, vv = aa[0], aa[1], aa[2..-1]
  Adj[u] = vv
end

Adj.keys.each do |i|
  l = []
  Adj.keys.each do |j|
    l << (Adj[i].include?(j) ? 1 : 0)
  end
  puts l.join(" ")
end
