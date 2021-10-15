N, M = gets.chomp.split.map(&:to_i)
G = Array.new(N) { Array.new }
C = Array.new(N, 0)

M.times do
  a, b = gets.chomp.split.map(&:to_i)
  G[a] << b
  G[b] << a
end

id = 0
N.times do |i|
  next if C[i] > 0

  id += 1
  q = [i]
  f = Array.new(N, false)
  f[i] = true
  C[i] = id
  while qq = q.shift
    G[qq].each do |j|
      next if f[j] || C[j] > 0
      q.push(j)
      C[j] = id
    end
  end
end

q = gets.to_i
q.times do
  s, t = gets.chomp.split.map(&:to_i)
  puts C[s] == C[t] ? "yes" : "no"
end
