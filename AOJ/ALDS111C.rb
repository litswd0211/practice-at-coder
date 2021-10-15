N = gets.to_i

M = Array.new(N+1) { Array.new(N+1, false) }

N.times do
  gg = gets.chomp.split.map(&:to_i)
  gg[2..-1].each {|v| M[gg[0]][v] = true }
end

Q = [1]
F = Array.new(N+1, false)
D = Array.new(N+1, -1)
F[1] = true
D[1] = 0

while q = Q.shift
  M[q].each_with_index do |v, i|
    next unless v && !F[i]

    F[i] = true
    D[i] = D[q] + 1
    Q.push(i)
  end
end

D[1..-1].each_with_index {|v, i| puts [i+1, v].join(" ") }