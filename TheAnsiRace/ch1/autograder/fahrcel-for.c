#include <stdio.h>

#define LOWER 0	// lower limit
#define UPPER 300	// upper limit
#define STEP 20	// step size

/* programa que calcula tabla de fahrenheit a celsius */
main(){
	float fahr;

	printf ("fahr\tcelsius\n");
	for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP){
		printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}

}
