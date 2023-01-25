#include <stdio.h>

// replace tabs with \t, backspaces with \b and backslashes with \\
main(){
	int c;
	nc = nt = 0;

	for(nc = 0; (c = getchar()) != EOF;nc++){
		if (c == '\t') {
			nt++;
			printf("\\t");
		}
		else if (c == '\n') {
			nl++;
			printf("\\n");
		}
		else putchar(c);
	}
	printf("\nchars: %ld\n tabs: %ld\n", nc, nt);
}
