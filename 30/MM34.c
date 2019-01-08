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
		if(inl >= 1){
			printf("1");
			for(i = 2; i <= inl; i ++){
				if(inl%i == 0){
					printf(" %d", i);
				}
			}
		}
		printf("\n");
	}
} 
