#include<stdio.h>
int main(){
	int i=0;
	int d;
	int x,y;
	printf("Put a number");
	scanf("%d\n",&d);
	do{
	i++;
	x=(2*i)%d;
	y=i%d;	
	}while(x!=y);
	printf("They meet");
return 0;
}
