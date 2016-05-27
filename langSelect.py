import os
import random

path = os.path.realpath('projectEuler')

##Took Ruby and GO out.
##Considering obj-C, PERL, R, SCALA, Julia.
dict = {
		'C': '.c',
		'C++': '.cpp',
		'Python': '.py',
		'Java': '.java',
		'C#': '.cs',
		'PHP': '.php',
	}

lan = random.choice(dict.keys())
pNum = raw_input("Enter problem number: ")
print("Problem #%s should be done in %s" %
	(pNum, lan))
dirName = './problem' + str(pNum)

if not os.path.isdir(dirName):
	os.mkdir(dirName)
	dirName = 'problem' + str(pNum)
	pathToProb = os.path.abspath(dirName)
	d = os.chdir(pathToProb)
	ext = dict[lan]
	name = 'problem' + str(pNum) + ext
	p = open(name, 'w+')
	p.close()
	q = open('question.txt', 'w+')
	q.close()
