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
	int list_len = (len * log(len))/0.85;
	char tally[list_len];
	printf("2, ");
	for (int x = 0; x < list_len; x++){
		tally[x] = 1;
	}
	//
	int z = 1;
	int y;
	for ( y = 2, z = 1; z < len; z++ ) {
		y = next_prime(tally, y + 1);
		//if (z > len/2){
		//printf("%d, ", y);
		//if (z % 20 == 0){
		//	printf("\n");
		//}
		//}
		delserie(tally, list_len, y);
	}
	printf("%d\n", y);
	printf("%f", (log(len) * len / y));
	printf("\n");
}

int main(int argn, char * argv[]){
	int n = strtod(argv[1], 0);
	prime(n);
	return 0;
}
