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
		if(inl%400 == 0){
			j = 1;
		}
		else{
			if(inl%100==0){
				j = 2;
			}
			else{
				if(inl%4==0){
					j = 1;
				}
				else{
					j = 2;
				}
			}
		}
		if(j == 1){
			printf("Bissextile Year\n");
		}
		else{
			printf("Common Year\n");
		}
	}
} 
