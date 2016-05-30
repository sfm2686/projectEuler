import math

num = []
with open("input.txt") as f:
	for line in f:
		num.append(line.rstrip())
s = 0
for i in num:
	s += int(i)
sr = str(s)
print "The sum is: %d" % s
print "and the first 10 digits are: " + sr[:10]
