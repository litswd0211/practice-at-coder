N = gets.to_i
A = gets.chomp.split.map(&:to_i)

def counting_sort(a, b, k)
  vmax = 2_000_000
  c = Array.new(vmax+1, 0)
  
  (0...k).each do |i|
    c[a[i]] += 1
  end

  (1..vmax).each do |i|
    c[i] += c[i-1]
  end

  a.reverse_each do |aa|
    b[c[aa]-1] = aa
    c[aa] -= 1
  end
end

b = Array.new(N)
counting_sort(A, b, N)

puts b.join(" ")
