N = gets.to_i
TO = {}
(N-1).times.each do |i|
  i += 1
  a, b = gets.chomp.split.map &:to_i
  TO[a] ||= []
  TO[b] ||= []
  TO[a] << b
  TO[b] << a
end

TO.transform_values {_1.sort}

pp TO

ans = []
def dfs(crr, parent, ans)
  ans << crr
  TO[crr].each do |nxt|
    if nxt != parent
      dfs(nxt, crr, ans)
      ans << crr # 戻ってきた
    end
  end
end

dfs(1, -1, ans)
puts ans.join " "
