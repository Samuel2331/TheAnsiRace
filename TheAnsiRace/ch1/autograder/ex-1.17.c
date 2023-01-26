#include <stdio.h>
#define MAXLINE 1000

int getlino(char line[], int maxline);

/* example on section 1.9 */

/* the program will probably NOT work using the function name getline() as stated in the book
just change the name of all ocurrances of this function, to something like getln(), to make it work */

/* printf() to use */
main(){

    int len;
    char line[MAXLINE];


    while((len = getlino(line, MAXLINE)) > 0){
        if(len > 80){
            printf("%s",line);
        }

        char line[MAXLINE];
    }
}

int getlino(char s[], int lim){
    int c, i;

    for (i = 0; i < lim-1 && ((c = getchar()) != EOF) && c!='\n'; i++){
        s[i] = c;
    }

    if(c == '\n'){
        s[i] = '\n';
        i++;
    }

    s[i] = '\0';

    return i;
}



