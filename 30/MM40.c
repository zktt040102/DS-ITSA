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
		inl = atoi(str);
		sol = 0;
		for(i = 1; i <= inl; i ++){
			if(i > 1)printf("+ ");
			printf("%d ", i);
			sol += i;
		}
		printf("= %d\n", sol);
	}
} 
