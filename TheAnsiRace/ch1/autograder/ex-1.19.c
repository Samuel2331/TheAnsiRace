#include <stdio.h>

#define MAXLINE 1000
/* exercise 1.19 */
int getlino(char line[], int maxline);
void reverse(char line[], int leng);
/* printf() to use */

main(){
    int len;
    char line[MAXLINE];

    while((len = getlino(line, MAXLINE)) > 0){
            reverse(line ,len);
            printf("%s",line);
    }

    return 0;
}

int getlino(char s[], int lim){
    int c, i;

    for (i = 0; i < lim-1 && ((c = getchar()) != EOF) && c!='\n'; i++){
        s[i] = c;
    }

    if(c == '\n'){
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

void reverse(char s[], int l){
    char aux;
    for(int i = 0; i < ((l)/2); i++){
        aux = s[i];
        s[i] = s[l - 1 - i];
        s[l - 1 - i] = aux;
    }
}
/* when reversing, the newline should be put at the beggining

"test
case
string
"

becomes

"
tset
esac
gnirts" */
