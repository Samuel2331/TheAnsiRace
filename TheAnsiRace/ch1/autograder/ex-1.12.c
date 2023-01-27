#include <stdio.h>

// cuenta lineas, palabras y caracteres del input
#define IN 1
#define OUT 0

main(){
	int c, state;

	state = OUT;

	while((c = getchar()) != EOF){

		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
            putchar('\n');
		}else if(state == OUT){
			state = IN;
		}

        if(state == IN){
            putchar(c);
        }
	}

	return 0;
}