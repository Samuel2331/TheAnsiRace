#include <stdio.h>

/* Write the function strindex(s,t) 
which returns the position of the rightmost 
occurrence of t in s, or -1 if there is none. */

int strindex(char str[], char c){
	// implementar aqui
	int i, j, k, right;

	right = -1;

	for(i = 0; str[i] != '\0'; i++){
		if(str[i] == c)
			right = i;
	}

	return right;
}

int main(){
	char str[] = "hola ya funciono?";
	int x = strindex(str, 'a');
	printf("la ultima posicion de a esta en: %d\n", x);
}
