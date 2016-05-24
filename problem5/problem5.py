def isDiv(num):
	for i in range(1, 21):
		if not(num % i == 0):
			return False
	return True

def main():
	i = 2
	while not(isDiv(i)):
		i = i + 2
	print "The number that divides range [1,20] is %d" % i

main()

