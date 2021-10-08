N = gets.to_i

Node = Struct.new(:i, :p, :l, :r)
@t = nil

def insert(z)
  return @t = z if @t.nil?

  pre = nil
  crr = @t
  while crr != nil
    pre = crr
    if crr.i > z.i
      crr = crr.l
    else
      crr = crr.r
    end
  end

  if pre.i > z.i
    pre.l = z
    z.p = pre
  else
    pre.r = z
    z.p = pre
  end
end

@ino = []
def p_ino(n)
  p_ino(n.l) if n.l
  @ino << n.i
  p_ino(n.r) if n.r
end

@preo = []
def p_preo(n)
  @preo << n.i
  p_preo(n.l) if n.l
  p_preo(n.r) if n.r
end

N.times do 
  cmd = gets.chomp
  if cmd == "print"
    @ino = []
    p_ino(@t)
    puts " " + @ino.join(" ")

    @preo = []
    p_preo(@t)
    puts " " + @preo.join(" ")
  else
    i = cmd.split.last.to_i
    insert(Node.new(i))
  end
end
