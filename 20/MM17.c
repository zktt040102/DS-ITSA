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
		for(i = 1;;i++){
			if((inl%i==0)&&(inh%i==0)){
				j = i;
			}
			if((inl<i)&&(inh<i)){
				break;
			}
		}
		printf("%d\n", j);	
	}
} 
