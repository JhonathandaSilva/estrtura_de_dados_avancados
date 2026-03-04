#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int v_fatorial;
    
    
    v_fatorial = 5;

    
    for (int i = v_fatorial - 1 ; i > 0 ; i--){
		v_fatorial = v_fatorial * i;
		printf("%d\n", v_fatorial);
	}
    
    
    
    return 0;
}

