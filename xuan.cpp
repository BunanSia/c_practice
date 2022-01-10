#include<stdio.h>

void triangle_one(void){
	int i,c;
	for(c=1;c<=3;c++){
			for(i=0;i<c;i++){
		printf("*");
	}
	printf("\n");
	}
}
void triangle_two(void){
	
	int i,c;
	for(c=0;c<3;c++){
			for(i=3;i>c;i--){
		printf("*");
	}
	printf("\n");
	}
}
void triangle_three(void){
	int i,c;
	for(c=3;c>0;c--){
	for(i=1;i<=3;i++){
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
}
void triangle_four(void){
	{
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
}
