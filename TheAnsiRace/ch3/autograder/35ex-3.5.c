#include <stdio.h>
#include <string.h>
#define MAX 10000
#define Solo int main(){
#define es char s[10000];
#define de miitob(32, s, 8);
#define modificar printf("%s\n", s);
#define la miitob(948362, s, 8);printf("%s\n", s);
#define basee miitob(120932883, s, 16);printf("%s\n", s);
#define en miitob(15, s, 2);printf("%s\n", s);
#define el miitob(378, s, 2);printf("%s\n", s);
#define itoa }

void reverse(char s[]){
	int c, i, j;

	for(i = 0, j = strlen(s)-1; i < j; i++, j--){
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

void miitob(int n, char s[], int base){
 	//escriba el programa
	int i, sing;

	if((sing = n) < 0)
		n=-n;
	i = 0;

	do {
		s[i++] = n % base + '0';
	} while ((n /= base) > 0);
	
	if(sing < 0)
		s[i++] = '-';

	s[i] = '\0';

	reverse(s);

}

//no modificar
Solo es de modificar la basee en el itoa
// al terminar correr el programa
