#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int inh, inl;
	int sol;
	int i;
	int j;
	char str[30];
	char *space = " ";
  	char *tmp;
	while(gets(str)!=NULL){
		tmp = strtok(str,space);
		inl = atoi(tmp);
		tmp = strtok (NULL, space);
		inh = atoi(tmp);
		sol = (inl*inl)+(inh*inh);
		if(sol>10000){
			printf("outside\n");
		}
		else{
			printf("inside\n");	
		}
	}
} 
