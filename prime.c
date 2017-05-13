#include <stdio.h>
#include <stdlib.h>

int delserie(int tally[], int len, int serie){
	for (int x = serie * 2; x < len; x += serie){
		tally[x] = 0;
	}
	return 0;
}

int next_prime(int tally[], int y){
	while(!tally[y]){
		y++;
	}
	return y;
}	
int prime(int len){
	int primes[len];
	int list_len = len * len;
	int tally[list_len];
	printf("Done\n");
	for (int x = 0; x < list_len; x++){
		tally[x] = x;
	}
	printf("Done!\n");
	//
	int z = 1;
	for ( int y = 2; z < len; z++ ) {
		if (z == len){
			break;
		}
		if (y == 2){
			delserie(tally, list_len, y);
		}
		y = next_prime(tally, y + 1);
		printf("%d, ", y);
		if (z % 20 == 0){
			printf("\n");
		}
		delserie(tally, list_len, y);
	} 
	printf("\n");
	for (int z,e = 0; z != len; z++){
		if (tally[z]){
			primes[e] = tally[z];
			e++;
		}
	}
	//printf("%d\n", primes[4]);
	//for ( int u = 1; u < len; u++){
	//	printf("%d,", primes[u]);
	//}
	printf("\n");
	return 0;
}

int main(int argn, char * argv[]){
	int n = strtod(argv[1], 0);
	prime(n);
	return 0;
}
