#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int inh, inl;
	long long int sol;
	char str[30];
	char *space = " ";
  	char *tmp;
	while(gets(str)!=NULL){
		tmp = strtok(str,space);
		inl = atoi(tmp);
		if(inl<31){
			sol = 1 << inl;
			printf("%lld\n",sol);
		}
		else printf("Value of more than 31\n");
	}
} 
