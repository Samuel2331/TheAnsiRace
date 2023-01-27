#include <stdio.h>
#define HOLA int main(){
#define MUCHA char s[5]; s[0] = '5';s[1] = '+';s[2] = '9';s[3] = '!';s[4] = 0;
#define QUE squeeze(s, '5');
#define TAL printf("+9! = %s\n", s);
#define PUESI }


/* squeeze: delete all c from s */
void squeeze(char s[], int c){
	// escribir aqui su programa...

	int i, j;

	for (i = j = 0; s[i] != '\0'; i++){
		if(s[i] != c){
			s[j] = s[i];
			j++;
		}
	}
	s[j] = '\0';
	
}

// no modificar el main
HOLA MUCHA QUE TAL PUESI
// al terminar correr el programa
