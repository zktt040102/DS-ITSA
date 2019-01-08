#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int inl;
	int i, n;
	int k[8];
	char str[30];
	char *space = " ";
  	char *tmp;
	while(gets(str)!=NULL){
		tmp = strtok(str,space);
		inl = atoi(tmp);
		n = inl;
		if(n<0) inl = (-inl)-1;
    	for (i=0; i<8; i++){
        	k[i] = inl % 2;
       	 	inl = inl/2;
    	}
    	if(n<0){
    		for (i=0; i<8; i++){
        		if(k[i] == 1) k[i] = 0;
        		else k[i] = 1;
    		}
		}
    	for (i=7; i>=0; i--){
    		printf("%d", k[i]);
		}
		printf("\n");
	}
} 
