#include <iostream>
using namespace std;

const int limit = 4000000;

int main(){

	int seq[limit/2];
	int s = - 1;
	int sum = 0;
	while(seq[s] < limit){
		s ++;
		if ( s < 2 )
			seq[s] = s + 1;
		else
			seq[s] = seq[s - 2] + seq[s - 1];
		if ( seq[s] % 2 == 0 )
			sum += seq[s];
	}
	cout << "Sum of even numbers is " << sum << endl;
	return 0;
}
