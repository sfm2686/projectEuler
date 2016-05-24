#include <iostream>
using namespace std;

bool isPrime(long num);
int main(){

	long in;
	cout << "Enter a number to find biggest factor: ";
	cin >> in;
	cout << "The number entered is: " << in << endl;
	if ( isPrime(in) )
		cout << "The number is prime" << endl;
	else{
		long result = in;
		int factor = 0;
		for ( int i = 2; i < (in / 2) + 1; i ++ ){
			if ( isPrime(i) && result % i == 0 ){
				result /= i;
				while ( result % i == 0 ){
					result /= i;
				}

				if ( isPrime(result) ){
					if ( result > i && result > factor )
						factor = result;
					else
						factor = i;
					break;
				}
				if ( i > factor )
					factor = i;
			}
		}
		cout << "The biggest prime factor in " << in << " is "
		<< factor << endl;
	}
	return 0;
}

bool isPrime(long num){
	if ( num != 2 && num % 2 == 0 )
		return false;
	for ( int i = 2; i < (num / 2) + 1; i ++ )
		if ( num % i == 0 )
			return false;
	return true;
}
