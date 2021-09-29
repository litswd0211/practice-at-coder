N = gets.to_i
C = N.times.map { gets.chomp }

lst = []

C.each do |c|
  case c
  when "deleteFirst" then lst.shift
  when "deleteLast" then lst.pop
  when /^insert.*/ then lst.unshift(c.split.last.to_i)
  when /^delete.*/ then lst.index(c.split.last.to_i).tap {|i| lst.delete_at(i) if i } 
  end
end

puts lst.join(" ")