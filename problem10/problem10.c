#include <stdio.h>

int isPrime(int num);
long getSum(int limit);

int main(){
	int limit;
	printf( "Enter a limit: ");
	scanf( "%d", &limit);
	printf( "The sum of all prime numbers under %d is %ld\a\n",
	limit, getSum(limit));

	return 0;
}

int isPrime(int num){
	if ( num != 2 && num % 2 == 0 )
		return 0;
	for ( int i = 2; i < ((num / 2) + 1); i ++ )
		if ( num % i == 0 )
			return 0;
	return 1;
}

long getSum(int limit){
	long sum = 0;
	for ( int i = 2; i < limit; i ++ )
		if ( isPrime(i) ){
			sum += i;
		}
	return sum;
}
