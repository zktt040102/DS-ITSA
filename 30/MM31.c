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
		sol = 0;
		for(i = 1; i <= inl; i ++){
			if((i%6 == 0) && (i%12 != 0)){
				sol += i;
			}
		}
		printf("%lld\n", sol);
	}
} 
