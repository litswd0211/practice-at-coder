N = gets.to_i
M = Array.new(N) { Array.new(N, 0) }
N.times do
  gg = gets.chomp.split.map(&:to_i)
  u, k, vv = gg[0], gg[1], gg[2..-1]
  vv.each {|v| M[u-1][v-1] = 1 }
end

D = Array.new(N)
F = Array.new(N)
@t = 0

def dfs_visit(u)
  D[u] = (@t += 1)
  N.times do |v|
    next if M[u][v] == 0
    next if D[v]

    dfs_visit(v)
  end
  F[u] = (@t += 1)
end

N.times do |u|
  dfs_visit(u) unless D[u]
end

N.times do |u|
  puts [u+1, D[u], F[u]].join(" ")
end
