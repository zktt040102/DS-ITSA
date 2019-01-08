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
		tmp = strtok (NULL, space);
		inh = atoi(tmp);
		if(inl >= inh)
			j = (inl-inh)+1;
		else
			j = (inh-inl)+1;
		sol = ((inl+inh)*j)/2;
		printf("%lld\n", sol);
	}
} 
