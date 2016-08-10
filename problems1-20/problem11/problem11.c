#include <stdio.h>
#include <stdlib.h>

int grid[20][20];
void readFile();
long findProd();

void main(){

	readFile();
	long prod = findProd();
	printf("The greatest product of four adj numbers is: %lu\n"
	, prod);

	int len = sizeof(grid)/sizeof(grid[0]);
	printf("The size of grid is: %d\n", len);
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

/*
	printf("\n\n");
	for (i = 0; i < 20; i++){
		for (j =0; j < 20; j++)
			printf(" %d ", grid[i][j]);
		printf("\n");
	}
*/

	fclose(fp);
}

long findProd(){

	printf("Just got inside findProd()\n");

	long prod = 0;
	int temp = 0;
	//Search
	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 20; j++){
			if ( (i + 3) < 20 && (j + 3) < 20 ){

				//vert
				temp = grid[i][j] * grid[i + 1][j]
				* grid[i + 2][j] * grid[i + 3][j];
				if ( temp > prod )
					prod = temp;

				//Hroz
				temp = grid[i][j] * grid[i][j + 1]
				* grid[i][j + 2] * grid[i][j + 2];
				if ( temp > prod )
					prod = temp;

				//right diag
				temp = grid[i][j] * grid[i + 1][j + 1]
				* grid[i + 2][j + 2] * grid[i + 3][j + 3];
				if ( temp > prod )
					prod = temp;
			}
		}

	for (int i = 19; i >= 0; i--)
		for (int j = 0; j < 20; j++){
			if ( (i - 3) >= 0 && (j + 3) < 20 )
				//left diag
				temp = grid[i][j] * grid[i - 1][j + 1]
				* grid[i - 2][j + 2] * grid[i - 3][j + 3];
				if ( temp > prod )
					prod = temp;
		}
	return prod;
}
