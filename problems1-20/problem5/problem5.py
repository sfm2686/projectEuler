def isDiv(num):
	for i in range(10, 21):
		if not(num % i == 0):
			return False
	return True

def main():
	i = 5
	while not(isDiv(i)):
		i = i + 5
	print "The number that divides in the range [1,20] is %d" % i

main()

