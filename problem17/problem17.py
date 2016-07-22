ones = ["", " one", " two", " three",
			" four", " five", " six", " seven",
			" eight", " nine", " ten", " eleven",
			" twelve", " thirteen", " fourteen",
			" fifteen", " sixteen", " seventeen",
			" eighteen", " nineteen"]

tens = [ "", " ten", " twenty", " thirty",
		" forty"," fifty",
		" sixty", " seventy",
		" eighty"," ninety"]

def getNum(num):
	if num <= 19:
		return ones[num]
	else:
		return tens[num/10]


def mapNum(num):
	numString = ""
###	while num < 0:
	return None

def main():
	i = input("Enter a number to map: ")
	num = getNum(i)
	print "The number you entered is%s" % num


main()
