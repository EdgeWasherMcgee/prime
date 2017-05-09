#include <stdio.h>

int remove(int tally[], int len, int serie){
	for (int x = serie * 2; x < len; x += serie){
		tally[x] = 0;
	}
	return 0;
}
int next_prime(tally[], int y){
	int to! = 1;
	for ( int x = y; to!; x++){
		if (tally[x]){
			return tally[x];
		}
	}
}	

int prime(int len){
	int primes[len];
	int list_len = len * len;
	int tally[list_len];
	for (int x = 0; x < list_len; x++){
		tally[x] = x;
	}
	//
	for ( int y = 2; while y < len; y = next_prime(tally[], y) ){
		remove(tally[], list_len, y);
	}
	for (int e = 0,int z = 0; z != len; z++){
		if (tally[z]){
			primes[e] = tally[z]
			e++
		}
	}
	return 0;
}

int main(){
	prime(5);
}
