##Brute force solution
def isPyth(trip):
	if ( not(trip[0] < trip[1]) or not(trip[1] < trip[2]) ):
		return False
	if (pow(trip[0], 2) + pow(trip[1], 2)) != pow(trip[2], 2):
		return False
	return True

def findTrip(limit):
	telist = [None] * 3
	for a in range(1, limit + 1):
		for b in range(2, limit + 1):
			for c in range(3, limit + 1):
				telist[0] = a
				telist[1] = b
				telist[2] = c
				if isPyth(telist) and (a + b + c) == limit:
					return (a * b * c)
	return 0

def main():
	limit = input("Enter a limit: ")
	print("The product for a pyth triplet that equals that limit is %d"
		% findTrip(limit))

main()
