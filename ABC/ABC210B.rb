N = gets.to_i
S = gets.chars

puts S.index {_1 == "1"}.even? ? "Takahashi" : "Aoki"