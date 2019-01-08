#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int inh, inl;
	double sol;
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
		if(inl<=60){
			sol = inl * inh;
		}
		else if(inl <= 120){
			inl -= 60;
			sol = (inh * 60) + (inl * inh * 1.33);
		}
		else{
			inl -= 120;
			sol = (inh * 60) + ((inh * 60) * 1.33) + ((inl * inh) * 1.66);
		}
		printf("%.1lf\n", sol);
	}
} 
