#include <stdio.h>
#define MAIN int main(){
#define PROGRAMA int x;char cc[1];cc[0] = '3';x = miatoi(cc);
#define APANTALLA printf("\'3\' = %d\n",x);
#define FIN }
/* atoi: convert s to integer */

int miatoi(char s[]) { // recibe un char []
 	//escribir aqui su programa...
	int i, n;

	n = 0;

	for(i = 0; s[i] >= '0' && s[i] <= '9'; i++){
		n = 10 * n + (s[i] - '0');
	}
	return n;
}


// no modificar el main
MAIN
PROGRAMA
APANTALLA
FIN
// al terminar correr el programa
