#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	float inh, inl;
	float sol;
	char str[30];
	char *space = " ";
  	char *tmp;
	while(gets(str)!=NULL){
		tmp = strtok(str,space);
		inl = atof(tmp);
		tmp = strtok (NULL, space);
		inh = atof(tmp);
		sol = (inl*inh)/2;
		printf("%.1f\n",sol);
	}
} 
