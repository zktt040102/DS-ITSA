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
		sol = inl/10;
		printf("NT10=%d\n",sol);
		inl = inl%10;
		sol = inl/5;
		printf("NT5=%d\n",sol);
		inl = inl%5;
		printf("NT1=%d\n",inl);
	}
} 
