N = gets.to_i
A = N.times.map { gets.chomp }

def partition(a, p, r)
  x = a[r].split.last.to_i
  i = p - 1
  
  (p...r).each do |j|
    if a[j].split.last.to_i <= x
      i += 1
      a[i], a[j] = a[j], a[i]
    end
  end
  a[i+1], a[r] = a[r], a[i+1]
  i+1
end

def quick_sort(a, p, r)
  if p < r
    q = partition(a, p, r)
    quick_sort(a, p, q - 1)
    quick_sort(a, q + 1, r)
  end
end

def is_stable(a)
  a.each_cons(2).all? do |a1, a2|
    a1n = a1.split.last
    a2n = a2.split.last
    a1n != a2n || A.index(a1) < A.index(a2)
  end
end

a = A.dup
quick_sort(a, 0, N-1)

puts is_stable(a) ? "Stable" : "Not stable"
puts a
