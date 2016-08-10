#include <iostream>
using namespace std;

long findTrig(int num);
int findDivs(int num);

int main(){

	int limit;
	long n;

	cout << "Enter a limit for divs: ";
	cin >> limit;

	int i = 1;
	n = findTrig(i);
	while (findDivs(n) <= limit)
		n = findTrig(i++);

	cout << "The first trig to have over " << limit 
	<< " divs is The " << (i - 1) << "th with the value of "
	<< n << endl;

	return 0;
}

long findTrig(int num){
	int trig = (num * (num + 1) )/2;
	return trig;
}

int findDivs(int num){
	int divs = 2;
	int sum = num;
	for (int i = 2; i < sum; i++)
		if ( num % i == 0 ){
			sum = num / i;
			if ( sum == i )
				divs ++;
			else
				divs += 2;
		}
	return divs;
}
