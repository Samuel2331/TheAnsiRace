#include <stdio.h>

/* programa que calcula tabla de fahrenheit a celsius */
main(){
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	// lower value
	upper = 300;	// upper limit
	step = 20;	// step
	fahr = lower;

	printf ("fahr\tcelsius\n");
	while(fahr < upper){ // mientras fahr < upper
		celsius = 5 * (fahr-32) / 9;
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;

}
