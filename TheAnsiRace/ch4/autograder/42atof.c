#include <ctype.h>
#include <stdio.h>
#define Hay int main(){
#define Corren char s[2]; s[0] = '2'; s[1]='6';
#define El float f = miatof(s);
#define Programa int estano;
#define Para estano=1;
#define Verificar estano=1;
#define Si estano=1;
#define Sale printf("26.00 = %2.2f\n", f);
#define Igual }
/* atof: convert string s to double */
double miatof(char s[]) {
	//escribir el programa
	double val, power;
	int i, sing;

	for(i = 0; isspace(s[i]); i++);

	sing = (s[i] == '-') ? -1 : 1;

	if(s[i] == '+' || s[i] == '-')
		val = 10.0 * val + (s[i] - '0');
	if( s[i] == '.')
		i++;

	for(power = 1.0; isdigit(s[i]); i++){
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	return sing * val;
}

// no modificar o borrar
Hay Corren El Programa Para Verificar Si Sale Igual //26 = 26.00
