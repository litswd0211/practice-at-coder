N, K = gets.chomp.split.map(&:to_i)
C = gets.chomp.split.map(&:to_i)

mp = Hash.new(0)
ans = 0

N.times do |i|
  mp[C[i]] += 1

  if i >= K
    mp[C[i - K]] -= 1;
    mp.delete(C[i - K]) if mp[C[i - K]] <= 0
  end
  
  ans = [mp.size, ans].max
end

puts ans