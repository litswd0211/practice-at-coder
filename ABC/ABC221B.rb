S = gets.chomp.chars
T = gets.chomp.chars

wc = 0
S.size.times do |i|
  s = S[i]
  t = T[i]
  next if s == t
  
  ns = (i+1) >= S.size ? nil : S[i+1]
  if ns != t
    puts "No"
    exit
  else
    wc += 1
    S[i+1] = s
  end
end

if wc <= 1
  puts "Yes"
else
  puts "No"
end
