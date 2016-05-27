#include <iostream>
using namespace std;

int findTrig(int num);

int main(){

	int n;
	cout << "Enter a value for N: ";
	cin >> n;
	cout << "The " << n << "th trig is: "
	<< findTrig(n) << endl;

	return 0;
}

int findTrig(int num){
	int trig = 0;
	for (int i = 0; i <= num; i++){
		trig += i;
	}
	return trig;
}
