N = gets.to_i
PREO = gets.chomp.split.map(&:to_i)
INO = gets.chomp.split.map(&:to_i)

@pos = 0
@posto = []

def reconstruction(l, r)
  return if l >= r

  c = PREO[@pos]
  m = INO.index(c)
  @pos += 1
  reconstruction(l, m)
  reconstruction(m + 1, r)
  @posto << c
end

reconstruction(0, N)

puts @posto.join(" ")
