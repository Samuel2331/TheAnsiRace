#include <stdio.h>

#define ALPHANUMERIC 62	// 10 digits + 26 Uppercase + 26 lowercase

/* ex-1.14: prints a histogram of the frequencies of alphanumeric chars from its input [0-9,A-z]

int nAlphanumeric[ALPHANUMERIC]; stores the frecuency of 
[0-9] digits in 0~9
[A-Z] position 10~35
[a-z] position 36~61
*/

main(){

	int c, i, j;
	int nAlphanumeric[ALPHANUMERIC];

	for(i = 0; i < ALPHANUMERIC; i++){
		nAlphanumeric[i] = 0;
	}

	while((c = getchar()) != EOF){

		if (c >= '0' && c <= '9'){
			nAlphanumeric[c-'0']++;
		}else if(c >= 'A' && c <= 'Z'){
			nAlphanumeric[c-'A'+10]++;
		}else if(c >= 'a' && c <= 'z'){
			nAlphanumeric[c-'a'+36]++;
		}
	}

	// print results
	for(i=0; i<ALPHANUMERIC;++i) {
		if (i<10) printf("%c|", (char)i+'0');
		else if (i<36) printf("%c|", (char)i-10+'A');
		else printf("%c|", (char)i-36+'a');

		for (j=0; j<nAlphanumeric[i]; ++j) printf("*");
		printf("\n");
	}
}
