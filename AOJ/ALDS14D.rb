N, K = gets.chomp.split.map(&:to_i)
W = N.times.map { gets.to_i }

def f(p)
  i = 0
  K.times do
    s = 0
    while (s + W[i] <= p)
      s += W[i]
      i += 1
      return N if i == N
    end
  end
  return i
end

def bsearch(left, right)
  while (right - left > 1)
    mid = (right + left) / 2
    (yield mid) ? right = mid : left = mid
  end
  [right, left]
end

max = 10 ** 5 * 10 ** 5
ans = bsearch(0, max) {|mid| f(mid) >= N }[0]
puts ans