#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	float inh, inl1, inl2;
	float sol;
	char str[30];
	char *space = " ";
  	char *tmp;
	while(gets(str)!=NULL){
		tmp = strtok(str,space);
		inl1 = atof(tmp);
		tmp = strtok (NULL, space);
		inl2 = atof(tmp);
		tmp = strtok (NULL, space);
		inh = atof(tmp);
		sol = ((inl1 + inl2)*inh)/2;
		printf("Trapezoid area:%.1f\n",sol);
	}
} 
