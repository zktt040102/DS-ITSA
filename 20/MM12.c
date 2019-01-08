#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	float inl;
	float spd, x;
	char str[30];
	int i = 0;	
	char *space = " ";
  	char *tmp;
  	spd = 0.762;
	while(gets(str)!=NULL){
		tmp = strtok(str,space);
		inl = atof(tmp);
		x = 0.0;
		if(x >= inl)printf("%d\n",i);
		else{
			for(i = 1;;i ++){
				x += 1.0;
				inl += spd;
				if(x >= inl){
					printf("%d\n",i);
					break;
				}
			}
		}
	}
} 
