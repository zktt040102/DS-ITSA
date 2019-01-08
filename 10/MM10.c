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
		sol = inl / 5;
		sol = sol * 9;
		sol += 32.0;
		i = sol/0.01;
		j = i;
		j = j%10;
		i = j*0.01;
		if(j!= 0){
			if(j<5){
				sol-=i;
			}
			else{
				sol-=i;
				sol+=0.1;
			}
		}
		printf("%.1f\n", sol);
	}
} 
