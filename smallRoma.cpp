#include<stdio.h>
#include<math.h>
int main(){
	int sumN1,sumN2;
	int result,times;
	int i;
	scanf("%d",&sumN1);
	printf("\n");
	scanf("%d",&sumN2);
	printf("\n");
	result=abs(sumN1-sumN2);
	
	times=result/1000;
	for(i=0;i<times;i++){
		printf("M");
	}
	result=result%1000;
	
	times=result/500;
	for(i=0;i<times;i++){
		printf("D");
	}
	result=result%500;

	times=result/100;
	for(i=0;i<times;i++){
		printf("C");
	}
	result=result%100;
	
	times=result/50;
	for(i=0;i<times;i++){
		printf("L");
	}
	result=result%50;
	
	times=result/10;
	for(i=0;i<times;i++){
		printf("X");
	}
	result=result%10;
	
	times=result/5;
	for(i=0;i<times;i++){
		printf("V");
	}
	result=result%5;

	times=result/1;
	for(i=0;i<times;i++){
		printf("I");
	}
	result=result%1;
	
	return 0;
}

	
	
