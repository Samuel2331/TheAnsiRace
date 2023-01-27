#include <stdio.h>

void expand(char *s, char *t){
	// implementelo aqui
	int c, ini, i, j, k, gi, end;

	k = 0;
	
	for(i = 0; t[i] != '\0'; i++){
		c = t[i];
		if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')){
			if(gi == 1 && ini != 0){
				end = c;
			}else if(gi == 0){
				ini = c;
			}
			
			if(ini == 0 && end == 0){
				s[k++] = c;
			}
		}else if(c == '-' && ini != 0){
			gi = 1;
		}else{
			s[k] = t[i];
			k++;
		}

		if(ini != 0 && end != 0 && ini <= end){
			for(j = ini; j <= end; j++){
				s[k++] = j;
			}
			ini = 0;
			end = 0;
			gi = 0;
		}
	}

	s[k] = '\0';

}


int main(){
	char a[] = "a-z0-9";
	char b[] = "G-X";
	char c[] = "0-7";
	char s[100000];

	expand(s, a);
	printf("(%s)\n", s);
	expand(s, b);
	printf("(%s)\n", s);
	expand(s, c);
	printf("(%s)\n", s);
}