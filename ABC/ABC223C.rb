N = gets.to_i
AB = N.times.map { gets.chomp.split.map(&:to_i) }

t = AB.sum{_1.to_f/_2} / 2
cm = 0.0

AB.each do |a, b|
  break if t <= 0

  el = a.to_f/b
  if t < el
    cm += t.to_f * b
    t = 0
  else
    cm += a
    t -= el
  end
end

puts cm
