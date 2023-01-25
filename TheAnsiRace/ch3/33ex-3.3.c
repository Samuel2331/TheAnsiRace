#include <stdio.h>

void expand(char *s, char *t){
	// implementelo aqui
}


int main(){
	char a[] = "a-z0-9";
	char b[] = "G-X";
	char c[] = "0-7";
	char s[100000];

	expand(s, a);
	printf("(%s)\n", s);
	expand(s, b);
	printf("(%s)\n", s);
	expand(s, c);
	printf("(%s)\n", s);
}