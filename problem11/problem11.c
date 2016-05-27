#include <stdio.h>
#include <stdlib.h>

int grid[20][20];
void readFile();

void main(){

	printf("About to call readFile()");
	readFile();
}

void readFile(){

	FILE *fp = fopen("input.txt", "r");

	int num;

	int i, j;

	for ( i = 0; i < 20; i++)
		for ( j = 0; j < 20; j++){
 			fscanf(fp, "%d", &num);
			grid[i][j] = num;
			}

	printf("\n\n");
	for (i = 0; i < 20; i++){
		for (j =0; j < 20; j++)
			printf(" %d ", grid[i][j]);
		printf("\n");
	}

	fclose(fp);
}
