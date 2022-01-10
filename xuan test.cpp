#include<stdio.h>
int main(){
	int i,c;
	for(c=3;c>0;c--){
			i=1;
			if(i<c){
		printf(" ");
		i++;
	}
	else{
		if(c>0){
		printf("*");
		c--;
	}
	else
	printf("\n");
	}
	
	}
	return 0;
}
