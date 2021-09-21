n = gets.to_i

ans = []
while n > 0
    if n % 2 != 0
        n -= 1
        ans << "A"
    else
        n /= 2
        ans << "B"
    end
end

puts ans.reverse.join
