N, M = gets.split.map &:to_i
pipes = M.times.map {gets; gets.split.map &:to_i}
checks = []
while pipe = pipes[-1]
    color = pipe.shift or next pipes.pop
    if checks[color]
        pipes << checks[color]
        checks[color] = nil
    else
        checks[color] = pipes.pop
    end
end
puts checks.any?{_1} ? :No : :Yes