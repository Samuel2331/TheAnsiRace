#include <stdio.h>

#define MAX 1000

int getlino(char s[]);

/* exercise 1.20 */

/* printf() to use */
main(){  
    int len;
    char notab[MAX];

        
    while((len = getlino(notab)) > 0){
        printf("%s",notab);

        char notab[MAX];
    }

}

int getlino(char s[]){
    int i, c, j, rec, o;
    i = 0;
    o = 0;
    rec = 0;
    while((c = getchar()) != EOF && c != '\n'){
        if(c == '\t'){
            o = 0;
            for(j = i; rec < 8; ++rec){
                s[j] = 32; 
                j++;   
                o++;   
            }
            rec = 0;
            i = i + o;
        }else if( c != '\t'){
            s[i] = c;

            if(rec == 8){
                rec = 0;
            }
            rec++;
            i++;
        }
    }

    if(c == '\n'){
        s[i] = c;
        i++;
    }

    s[i] = '\0';

    return i;

}