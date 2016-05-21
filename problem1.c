#include <stdio.h>

int main(){
	int count, sum = 0;
	for(count = 0; count < 1000; count+=1){
		if (count % 3 == 0 || count % 5 == 0)
			sum += count;
	}
	printf("The sum of all 3 and 5 multiples is %d\n", sum);
	return 0;
}
