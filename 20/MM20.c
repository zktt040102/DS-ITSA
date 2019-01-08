#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int inl;
	int i, n;
	int k[8];
	char str[30];
	char c[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	char *space = " ";
  	char *tmp;
	while(gets(str)!=NULL){
		tmp = strtok(str,space);
		inl = atoi(tmp);
		for (i=0; i<8; i++){
			k[i] = 18;
		}
    	for (i=0; i<8; i++){
        	k[i] = inl % 16;
       	 	inl = inl/16;
       	 	if(inl == 0) break;
    	}
    	for (i=7; i>=0; i--){
    		if(k[i]!=18)printf("%c", c[k[i]]);
		}
		printf("\n");
	}
} 
