#include <stdio.h>

/* programa que calcula tabla de fahrenheit a celsius */
main(){
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	// lower value
	upper = 300;	// upper limit
	step = 20;	// step

	celsius = lower;
	printf ("fahr\tcelsius\n");
	while(celsius < upper){ // mientras celsius < upper
		fahr = (9 * celsius)/5 + 32;
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		celsius = celsius + step;
	}

}
