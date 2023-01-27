#include <stdio.h>

/* exercise 1.15 */
float fahrcel(float fare);

/* loop with prints */
main(){
	printf ("fahr\tcelsius\n");
	float fahr, upper, step;
	fahr = 0;
	upper = 300;
	step = 20;
	while(fahr<upper){
		printf("%3.0f\t%6.1f\n", fahr, fahrcel(fahr)/* call fahrcel() passing it an argument */);
		fahr = fahr + step;
	}

	return 0;
}

float fahrcel(float fare){
	return ((5.0/9.0) * (fare - 32));
}
