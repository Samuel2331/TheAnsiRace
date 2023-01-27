#include <stdio.h>
#include <string.h>
#define MAX 10000
#define Ya int main(){
#define Les char s[10000];
#define Falta miitoa(345090, s);
#define Poco printf("%s\n", s);
#define Wooo }

void reverse(char s[]){
	int c, i, j;

	for(i = 0, j = strlen(s)-1; i < j; i++, j--){
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}


void miitoa(int n, char s[]){
 	//escriba el programa
	int i, sing;

	if((sing = n) < 0)
		n=-n;
	i = 0;

	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	
	if(sing < 0)
		s[i++] = '-';

	s[i] = '\0';

	reverse(s);
}

//no modificar
Ya Les Falta Poco Wooo
// al terminar correr el programa
