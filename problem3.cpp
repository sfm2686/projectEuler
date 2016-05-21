#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num);
int main(){

	int in;
	cout << "Enter a number to find biggest factor" << endl;
	cin >> in;
	cout << "The number entered was: " << in << endl;
	bool result = isPrime(in);
	if ( result )
		cout << "The number is prime" << endl;
	else
		cout << "The number is NOT prime " << endl;
	return 0;
}

bool isPrime(int num){
	for ( int i = 2; i < num; i ++ )
		if ( num % i == 0 && i != num )
			return false;
	return true;
}
