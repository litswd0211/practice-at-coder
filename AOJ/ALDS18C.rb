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

def find(i)
  crr = @t
  while crr != nil
    break if crr.i == i

    if crr.i > i
      crr = crr.l
    else
      crr = crr.r
    end
  end

  if crr&.i != i
    nil
  else
    crr
  end
end

def delete(i)
  z = find(i)
  y = nil
  x = nil

  if z.l == nil || z.r == nil
    y = z
  else
    y = tree_successor(z)
  end

  if y.l != nil
    x = y.l
  else
    x = y.r
  end

  if x != nil
    x.p = y.p
  end

  if y.p == nil
    @t = x
  else
    if y == y.p.l
      y.p.l = x
    else
      y.p.r = x
    end
  end

  if y != z
    z.i = y.i
  end
end

def tree_successor(x)
  return tree_minimum(x) if x.r != nil

  y = x.p
  while y != nil && x == y.r
    x = y
    y = y.p
  end
  y
end

def tree_minimum(x)
  while x.l != nil
    x = x.l
  end
  x
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
  elsif cmd.start_with?("insert")
    i = cmd.split.last.to_i
    insert(Node.new(i))
  elsif cmd.start_with?("find")
    i = cmd.split.last.to_i
    puts find(i) ? "yes" : "no"
  elsif cmd.start_with?("delete")
    i = cmd.split.last.to_i
    delete(i)
  end
end
