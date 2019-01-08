#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int in1, in2, out1, out2;
	int itime, otime, x, sol;
	char str[30];
	int i;	
	char *space = " ";
  	char *tmp;
	while(gets(str)!=NULL){
		tmp = strtok(str,space);
		in1 = atoi(tmp);
		tmp = strtok (NULL, space);
		in2 = atoi(tmp);
		gets(str);
		tmp = strtok(str,space);
		out1 = atoi(tmp);
		tmp = strtok (NULL, space);
		out2 = atoi(tmp);
		itime = in1*60 + in2;
		otime = out1*60 + out2;
		x = otime - itime;
		x = x/30;
		if(x>4){
			sol+=120;
			x -= 4;
			if(x>4){
				sol+=160;
				x -= 4;
				if(x>0){
					sol = sol + (x * 60);
				}
			}
			else{
				sol = sol + (x * 40);
			}
		}
		else{
			sol = x * 30;
		}
		printf("%d\n", sol);
	}
} 
