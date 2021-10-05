N = gets.to_i
A = gets.chomp.split.map(&:to_i)

def partition(a, p, r)
  x = a[r]
  i = p - 1
  (p...r).each do |j|
    if a[j] <= x
      i += 1
      a[i], a[j] = a[j], a[i]
    end
  end
  a[i+1], a[r] = a[r], a[i+1]
  i+1
end

q = partition(A, 0, N-1)
puts A.map.with_index {|a, i| i == q ? "[#{a}]" : a }.join(" ")
