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
		if((inl > 0)&&(inh > 0)){
			printf("1st Quadrant\n");
		}
		if((inl < 0 )&&(inh > 0)){
			printf("2nd Quadrant\n");
		}
		if((inl < 0)&&(inh < 0)){
			printf("3rd Quadrant\n");
		}
		if((inl > 0)&&(inh < 0)){
			printf("4th Quadrant\n");
		}
		if((inl == 0)&&(inh == 0)){
			printf("Origin\n");
		}
		if((inl == 0)&&(inh != 0)){
			printf("y-axis\n");
		}
		if((inl != 0)&&(inh == 0)){
			printf("x-axis\n");
		}
	}
} 
