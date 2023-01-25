#include <stdio.h>

int foo(int);
int global;

main(int argc, char * argv[]){
	printf("argc: %d\n", argc);
	printf("argv[%d]=%s\n", 6, argv[6]);
	printf("retorno: %d\n", foo(5));
}

int foo (int x){
	return x;
}

