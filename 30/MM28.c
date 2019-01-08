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
		if(inl >= 35){
			printf("35");
			for(i = 36; i <= inl; i ++){
				if((i%35==0)){
					printf(" %d", i);
				}
			}
		}
		printf("\n");
	}
} 
