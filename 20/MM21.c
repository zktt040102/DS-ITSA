#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int inh, inl;
	long long int sol;
	int i;
	int j;
	char str[30];
	char *space = " ";
  	char *tmp;
	while(gets(str)!=NULL){
		tmp = strtok(str,space);
		inl = atoi(tmp);
		sol = 1;
		for(i = 1; i <= inl; i ++)
			sol = sol *i;
		printf("%lld\n", sol);
	}
} 
