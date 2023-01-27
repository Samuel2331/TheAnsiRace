#include <stdio.h>

#define ING int main(){ 
#define ALI char s[6], f[6];s[0] = 'a';s[1] = 'n';s[2] = 's';s[3] = 'i';s[4] = ' ';s[5] = 'c';f[0] = ' ';f[1] = 'r';f[2] = 'o';f[3] = 'c';f[4] = 'k';f[5] = 's';
#define LEMUS mistrcat(s, f);
#define ENTONCES printf("ansi c rocks = %s\n", s);
#define YaMeConfundi }
/* strcat: concatenate t to end of s; s must be big enough */
void mistrcat(char s[], char t[]) {
	//escribir el programa
	int i, j;

	i = '0';
	j = '0';
	while(s[i] != '\0')
		i++;

	while((s[i++] = t[j++]) != '\0')
		;
}

// no modificar el main
ING ALI LEMUS ENTONCES YaMeConfundi
// al terminar correr el programa
