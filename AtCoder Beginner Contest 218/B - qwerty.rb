p = gets.split.map &:to_i
s = ("a".."z").to_a
puts p.map {|p| s[p.pred] }.join
