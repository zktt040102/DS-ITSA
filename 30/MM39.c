#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int in1, in2, in3;
	long long int sol;
	int i;
	int j;
	char str[30];
	char *space = " ";
  	char *tmp;
	while(gets(str)!=NULL){
		tmp = strtok(str,space);
		in1 = atoi(tmp);
		tmp = strtok (NULL, space);
		in2 = atoi(tmp);
		tmp = strtok (NULL, space);
		in3 = atoi(tmp);
		j = in1;
		if(j<in2) j = in2;
		if(j<in3) j = in3;
		if(j == in1){
			if(j<in2 + in3) i = 1;
			else i = 2;
		}
		if(j == in2){
			if(j<in1 + in3) i = 1;
			else i = 2;
		}
		if(j == in3){
			if(j<in2 + in1) i = 1;
			else i = 2;
		}
		if(i == 1){
			if(j == in1){
				if((j*j)<(in2*in2) + (in3*in3)) i = 3;
				if((j*j)==(in2*in2) + (in3*in3)) i = 4;
				if((j*j)>(in2*in2) + (in3*in3)) i = 5;
			}
			if(j == in2){
				if((j*j)<(in1*in1) + (in3*in3)) i = 3;
				if((j*j)==(in1*in1) + (in3*in3)) i = 4;
				if((j*j)>(in1*in1) + (in3*in3)) i = 5;
			}
			if(j == in3){
				if((j*j)<(in2*in2) + (in1*in1)) i = 3;
				if((j*j)==(in2*in2) + (in1*in1)) i = 4;
				if((j*j)>(in2*in2) + (in1*in1)) i = 5;
			}
		}
		if(i == 2){
			printf("Not Triangle\n");
		}
		if(i == 3){
			printf("Acute Triangle\n");
		}
		if(i == 4){
			printf("Right Triangle\n");
		}
		if(i == 5){
			printf("Obtuse Triangle\n");
		}
	}
} 
