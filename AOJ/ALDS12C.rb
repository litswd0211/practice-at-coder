N = gets.to_i
C = gets.chomp.split

def bubble_sort(c, n)
  0.upto(N-1) do |i|
    (N-1).downto(i+1) do |j|
      c[j], c[j-1] = c[j-1], c[j] if c[j][1].to_i < c[j-1][1].to_i
    end
  end
  c
end

def selection_sort(c, n)
  (0...n).each do |i|
    minj = i
    (i...n).each do |j|
      minj = j if c[minj][1].to_i > c[j][1].to_i
    end
    c[i], c[minj] = c[minj], c[i]
  end
  c
end

def stable?(cor, act)
  act.each_cons(2) do |a, b|
    next if a[1].to_i != b[1].to_i

    ai = cor.find_index {|ca| ca == a}
    bi = cor.find_index {|cb| cb == b}
    return false unless ai < bi
  end
  true
end

bc = bubble_sort(C.dup, N)
puts bc.join(" ")
puts stable?(C, bc) ? "Stable" : "Not stable"

sc = selection_sort(C.dup, N)
puts sc.join(" ")
puts stable?(C, sc) ? "Stable" : "Not stable"
