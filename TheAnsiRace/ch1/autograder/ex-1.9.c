#include <stdio.h>

main(){
    int c, sp;
    sp = 0;
    while((c = getchar()) != EOF){
        
        if(c == ' '){
            sp++;
        }else{
            sp = 0;
        }
        if(sp < 2){
            putchar(c);
        }
    }
}