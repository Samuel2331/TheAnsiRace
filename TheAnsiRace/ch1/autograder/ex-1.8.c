#include <stdio.h>

// cuenta blanks=nb, tabs=nt, newlines=nl
main(){
	int c, nb, nt, nl;
	nb = 0;
	nt = 0;
	nl = 0;

	while((c = getchar()) != EOF){
		if(c == '\n'){
			++nl;
			
		}
		if(c == '\t'){
			++nt;
		}
		if(c == ' '){
			++nb;
		}

	} 
	printf("blanks: %d tabs: %d newlines: %d\n ", nb, nt, nl);
}
