#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int delserie(char tally[], int len, int serie){
	for (int x = serie * 2; x < len; x += serie){
		tally[x] = 0;
	}
	return 0;
}

int next_prime(char tally[], int y){
	while(!tally[y]){
		y++;
	}
	return y;
}	
void prime(int len){
	int primes[len];
	int list_len = len * log(len) * 3.14159265;
	char tally[list_len];
	printf("2, ");
	for (int x = 0; x < list_len; x++){
		tally[x] = 1;
	}
	//
	int z = 1;
	for ( int y = 2; z < len; z++ ) {
		if (y == 2){
			delserie(tally, list_len, y);
		}
		y = next_prime(tally, y + 1);
		if (z > len/2){
		printf("%d, ", y);
			if (z % 20 == 0){
				printf("\n");
			}
		}
		//if (y == len - 1){
			//printf("%d", floor(log(len) * len / y));
		//}
		delserie(tally, list_len, y);
	}
	printf("\n");
}

int main(int argn, char * argv[]){
	int n = strtod(argv[1], 0);
	prime(n);
	return 0;
}
