#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int f91(int a){
	if(a<=100) return f91(f91(a+11));
	if(a>=101) return a-10;
}
int main(){
	int inh, inl;
	int sol;
	int num[11];
	int i;
	int j;
	char str[30];
	char *space = " ";
  	char *tmp;
	scanf("%d", &j);
	for(i = 0; i <j; i ++){
		scanf("%d", &num[i]);
	}
	for(i = 0; i <j; i ++){
		sol = f91(num[i]);
		printf("%d\n", sol);
	}
} 

