def sumOfSq():
	su = 0
	for i in range(1, 101):
		su = su + pow(i, 2)
	return su

def sqOfSum():
	su = 0
	for i in range(1, 101):
		su = su + i
	su = pow(su, 2)
	return su

def main():
	sumSq = sumOfSq()
	sqSum = sqOfSum()
	diff = sqSum - sumSq
	print "The sum of squares is: %d" % sumSq
	print "The square of sums is: %d" % sqSum
	print "The differnce between the two is: %d" % diff

main()
