#include<stdio.h>
int main(){
	int i,c;
	for(c=0;c<3;c++){
	for(i=0;i<3;i++){
		if(i<c){
		printf(" ");
	}
	else
	{
		printf("*");
	}
	}
	
	printf("\n");
	}
	return 0;
}
