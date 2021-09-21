n = gets.to_i
g = n.times.map { gets.chomp.split.map &:to_i }

# x軸を固定する
grp = Hash.new {|h, k| h[k] = [] }
g.each {|x, y| grp[x] << y }

count = 0
# x軸を2つ選ぶ（yはどれを選んでも長方形であることが保証される）
grp.values.combination(2).each do |y1, y2|
    # 選べるyの組み合わせを数える
    count += (y1 & y2).combination(2).size
end
puts count