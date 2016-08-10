#include <stdio.h>
#include <time.h>
#include <math.h>

int isPrime(int num);
long getSum(int limit);

int main(){
	int limit;
	printf( "Enter a limit: ");
	scanf( "%d", &limit);

	clock_t s = clock();
	printf( "The sum of all prime numbers under %d is %ld\a\n",
	limit, getSum(limit));
	clock_t e = clock();

	float seconds = (float)(e - s) / CLOCKS_PER_SEC;
	printf("Time ==> %f\n", seconds);

	return 0;
}

int isPrime(int num){

	if ( num == 1 )
		return 0;
	if ( num < 4 )
		return 0;
	if ( num % 2 == 0 )
		return 0;
	if ( num < 9 )
		return 1;
	if ( num % 3 == 0 )
		return 0;
	for ( int i = 5; i < sqrt(num); i += 6 )
		if ( num % i == 0 || num % (i + 2) == 0 )
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
