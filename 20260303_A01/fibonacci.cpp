#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int v_fibonacci = 25;
    int a = 0;
    int b = 1;
    int c = 0;
    
    
    for (int i = v_fibonacci - 1 ; i > 0 ; i--){
		printf("%d\n", c);
		
		c = a + b;
		b++;
		a = c;
		
		
	}
    
    
    
    return 0;
}

