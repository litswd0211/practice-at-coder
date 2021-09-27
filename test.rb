N = gets.to_i
a = gets.chomp.split.map(&:to_i)

puts a.join(" ")

(1..N-1).each do |i|
  ai = a.delete_at(i)
  newi = (0..i-1).to_a.reverse.find {|j| a[j] < ai }
  newi = newi ? newi + 1 : 0
  a.insert(newi, ai)
  puts a.join(" ")
end