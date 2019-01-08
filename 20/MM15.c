#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	float inh, inl;
	float sol;
	float i;
	int j;
	char str[30];
	char *space = " ";
  	char *tmp;
	while(gets(str)!=NULL){
		tmp = strtok(str,space);
		inl = atof(tmp);
		tmp = strtok (NULL, space);
		inh = atof(tmp);
		if((inl>100)||(inh>100)){
			printf("outside\n");
		}
		else if((inl<0)||(inh<0)){
			printf("outside\n");	
		}
		else{
			printf("inside\n");	
		}
	}
} 
