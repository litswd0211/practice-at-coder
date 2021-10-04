N = gets.to_i
A = gets.chomp.split.map(&:to_i)
Q = gets.to_i
M = gets.chomp.split.map(&:to_i)

def solve(i, m)
  return true if m == 0
  return false if i >= N
  
  solve(i+1, m) || solve(i+1, m-A[i])
end

puts M.map {|m| solve(0, m) ? "yes" : "no" }
