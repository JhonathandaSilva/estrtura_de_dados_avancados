#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int fatorial(int n){
	for (int i = n-1; i > 0; i--){
		n = n*i;
	}
	return n;
}

int main(){
	
	int fat = fatorial(5);
	
	printf("%d\n", fat);
	
}
