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

hund = " hundred"

def getNum(num):
	if num <= 19:
		return ones[num]
	elif num > 20 and num < 100:
		return tens[num/10]
	elif num % 100 == 0:
		return ones[num/100] + hund


def mapNum(num):
	numString = ""

	while num % 10 != 0:
		temp = num % 10
		num %= 10
		numString += getNum(temp)
		
	return numString

def main():
	i = input("Enter a number to map: ")
	num = getNum(i)
	print "The number you entered is:%s" % num

main()
