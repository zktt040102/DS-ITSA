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
		inl = atoi(str);
		if((inl == 3)||(inl == 4)||(inl == 5)){
			printf("Spring\n");
		}
		if((inl == 6)||(inl == 7)||(inl == 8)){
			printf("Summer\n");
		}
		if((inl == 9)||(inl == 10)||(inl == 11)){
			printf("Autumn\n");
		}
		if((inl == 12)||(inl == 1)||(inl == 2)){
			printf("Winter\n");
		}
	}
} 
