#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int in;
	int sol;
	int day = (60*60)*24;
	int hour = 60*60;
	int min = 60;
	int sec = 1;
	char str[30];
	int i;	
	char *space = " ";
  	char *tmp;
	while(gets(str)!=NULL){
		tmp = strtok(str,space);
		in = atoi(tmp);
		sol = in / day;
		in = in%day;
		printf("%d days\n", sol);
		sol = in / hour;
		in = in%hour;
		printf("%d hours\n", sol);
		sol = in / min;
		in = in%min;
		printf("%d minutes\n", sol);
		printf("%d seconds\n", in);
	}
} 
