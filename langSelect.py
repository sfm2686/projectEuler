import random

languages = [ 'C', 'C++', 'Python', 'Java', 'Ruby', 'C#'
			, 'PHP','Swift' ]

problem = input("Enter problem number: ")
print("Problem #%d should be done in %s" %
	(problem, random.choice(languages)))
