#include<stdio.h>

int main(){
	int num,score;
	scanf("%d",&num);
	if(num<=10){
		score=num*6;
	}
	else if(10<num<=20){
		score=60+2*(num-10);
	}
	else if(20<num<=40){
		score=80+1*(num-20);
	}
	printf("%d",score);
	return 0;
} 
