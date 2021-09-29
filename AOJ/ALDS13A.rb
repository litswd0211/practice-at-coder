A = gets.chomp.split.map {|a| Integer(a) rescue a }

stack = []

A.each do |a|
  next stack.push(a) if a.is_a?(Integer)

  a1 = stack.pop
  a2 = stack.pop
  new = a2.public_send(a, a1)
  stack.push(new)
end

puts stack
