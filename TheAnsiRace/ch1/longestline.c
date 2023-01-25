#include <stdio.h>
#define MAXLINE 1000

int getlino(char line[], int maxline);
void copy(char to[], char from[]);

/* example on section 1.9 */

/* the program will probably NOT work using the function name getline() as stated in the book
just change the name of all ocurrances of this function, to something like getln(), to make it work */

/* printf() to use */
main(){

    int len, max;
    char line[MAXLINE], longest[MAXLINE];

    max = 0;

    while((len = getline(line, MAXLINE)) > 0){
        if(len > max){
            max = len;
            copy(longest, line);
        }
    }
    
    if(max > 0){
        printf("%s", longest);
    }
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

void copy(char to[], char from[]){
    int i;

    i=0;
    while ((to[i] = from[i]) != '\0')
        i++;
}
