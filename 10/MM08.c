#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int inh, inl;
	int sol;
	char str[30];
	char *space = " ";
  	char *tmp;
	while(gets(str)!=NULL){
		tmp = strtok(str,space);
		inl = atoi(tmp);
		tmp = strtok (NULL, space);
		inh = atoi(tmp);
		sol = inl + inh;
		sol = sol * sol;
		printf("%d\n",sol);
	}
} 
