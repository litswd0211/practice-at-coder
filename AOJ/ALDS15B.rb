N = gets.to_i
S = gets.chomp.split.map(&:to_i)
@c = 0

def merge(a, left, mid, right)
  n1 = mid - left
  n2 = right - mid
  l = (0...n1).map {|i| a[left + i] }
  r = (0...n2).map {|i| a[mid + i] }
  l[n1] = Float::INFINITY
  r[n2] = Float::INFINITY
  i = j = 0
  (left...right).each do |k|
    @c += 1
    if l[i] <= r[j]
      a[k] = l[i]
      i += 1
    else
      a[k] = r[j]
      j += 1
    end
  end
end

def merge_sort(a, left, right)
  if left + 1 < right
    mid = (left + right) / 2
    merge_sort(a, left, mid)
    merge_sort(a, mid, right)
    merge(a, left, mid, right)
  end
end

merge_sort(S, 0, N)

puts S.join(" ")
puts @c