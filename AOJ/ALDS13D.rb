A = gets.chars

stack = []
crr = 0
ans = []

A.each_with_index do |a, i|
  case a
  when "\\" then stack.push(i)
  when "/" then crr += i - stack.pop.to_i
  #when "_" then 
  end

  pp "#{crr} : #{stack.join("-")}"
  #pp stack, crr

  if stack.empty?
    ans << crr
    crr = 0
  end
end
exit

pp ans
#require("hirb")
#puts Hirb::Helpers::AutoTable.render(res)
exit

ans.delete(0)

puts ans.sum
puts ([ans.size] + ans).join(" ")