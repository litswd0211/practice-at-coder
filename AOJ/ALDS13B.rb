N, Q = gets.chomp.split.map(&:to_i)
P = N.times.map { gets.chomp.split }.map {|a, b| [a, b.to_i] }

queue = P.dup
ans = []
now = 0

until queue.empty?
  name, rem = queue.shift
  elapse = [rem, Q].min
  now += elapse

  rem = rem - elapse
  if rem > 0
    queue.push([name, rem])
  else
    ans << [name, now]
  end
end

puts ans.map {|a| a.join(" ") }

