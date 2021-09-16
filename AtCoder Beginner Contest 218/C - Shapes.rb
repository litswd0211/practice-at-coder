require "set"

n = gets.to_i
s = n.times.map { gets.chomp.chars }
t = n.times.map { gets.chomp.chars }

def extract(arr)
    set = Set.new
    arr.each_with_index do |row, i|
        row.each_with_index do |val, j|
             set << [i, j] if val == "#"
        end
    end
    set
end

ss = extract(s)
ts = extract(t)

4.times do
    mins = ss.min
    newss = Set.new ss.map {|i, j| [i - mins[0], j - mins[1]] }

    mint = ts.min
    newts = Set.new ts.map {|i, j| [i - mint[0], j - mint[1]] }

    if newss == newts
        puts "Yes"
        exit
    end

    ss = Set.new ss.map {|i, j| [j, i * -1] }
end

puts "No"
