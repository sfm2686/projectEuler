#include <iostream>
#include <sstream>
using namespace std;

bool isPali(int num);

int main(){

	int biggest = 0;
	for ( int i = 999; i >= 100; i -- )
		for ( int j = 999; j >= 100; j -- ){
			if ( isPali(i * j) )
				if ( (i * j) > biggest )
					biggest = i * j;
		}

	cout << "The biggest pali product of 3 digits is: " << biggest << endl;
	return 0;
}

bool isPali(int num){

	stringstream conv;
	conv << num;
	string s = conv.str();

	int len = s.length();
	string one = "";
	for ( int i = 0; i < len; i ++ ){
		if ( s[i] != '\n' )
			one += s[i];
	}
	string two = "";
	for ( int i = len - 1; i > -1; i --){
		if ( s[i] != '\n' )
			two += s[i];
	}

	for ( int i = 0; i < len; i ++ )
		if ( one[i] != two[i] )
			return false;
	return true;
}
