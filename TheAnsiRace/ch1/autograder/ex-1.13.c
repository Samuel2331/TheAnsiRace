#include <stdio.h>

#define MAX_WORD_LENGHT 15

/* ex-1.13
int nCharsPerWord[MAX_WORD_LENGHT] indica cuantas palabras con esa cantidad de chars
int i,j son variables temporales
*/

#define OUT 0
#define IN 1

main(){
	int i, j, k, state;
	int c;
	int nCharsPerWord[MAX_WORD_LENGHT];

	k = 0;

	for(i = 0; i < MAX_WORD_LENGHT; i++){
		nCharsPerWord[i] = 0; 
	}

	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
            nCharsPerWord[k]++;
			k=0;
		}else if(state == OUT){
			state = IN;
		}

        if(state == IN){
            k++;
        }
	}

	// print results
	for(i=1; i<MAX_WORD_LENGHT;++i) {
		printf("%2d|", i);
		for (j=0; j<nCharsPerWord[i]; ++j) printf("*");
		printf("\n");
	}

	return 0;
}
