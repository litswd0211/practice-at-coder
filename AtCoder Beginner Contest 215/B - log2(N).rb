N = gets.to_i

puts (1..N).bsearch {|k| 2.pow(k) > N }.pred
