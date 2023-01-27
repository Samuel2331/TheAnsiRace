#include <stdio.h>

#define MAXLINE 1000
/* exercise 1.18 */
/* based on longestline.c */

int getlino(char line[], int max);

main(){

    int len;
    char line[MAXLINE];

    while((len = getlino(line, MAXLINE)) >= 0){
        
        if(len != 0){
            printf("%s",line);
        }
        char line[MAXLINE];
    }

    return 0;
}

int getlino(char s[], int max){
    int latsC, i, c;
    latsC = 0;
    i = 0;

    while(i < max - 1 && (c = getchar()) != EOF && c != '\n'){
        if(c != ' ' && c != '\t'){
            latsC = i;
            s[i] = c;
            i++;
        }
    }

    if(c == '\n'){
        s[i] = c;
        i++;
    }

    if(latsC == 0){
        i = 0;
    }

    if(c == EOF){
        i = -1;
    }

    s[i] = '\0';

    return i;

}
/* printf() to use */
