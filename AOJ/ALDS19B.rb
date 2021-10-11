H = gets.to_i
A = [nil] + gets.chomp.split.map(&:to_i)

def left(i)
  2*i
end

def right(i)
  2*i+1
end

def max_heapify(a, i)
  l = left(i)
  r = right(i)
  if l <= H && A[l] > A[i]
    largest = l
  else
    largest = i
  end
  if r <= H && A[r] > A[largest]
    largest = r
  end


  if largest != i
    a[i], a[largest] = a[largest], a[i]
    max_heapify(a, largest)
  end
end

def build_max_heap(a)
  (H/2).downto(1).each do |i|
    max_heapify(A, i)
    pp A
  end
end

build_max_heap(A)

puts A[1..-1].inject("") {|r, a| r + " #{a}" }
