#include<stdio.h>

int main(){
	int a,b;
	printf("Chhiann su-jip nng e soo\n");
	scanf("%d",&a);
	scanf("%d",&b);
	int plus,minus,multiply,divide;
	plus=a+b;
	minus=a-b;
	multiply=a*b;
	if(b==0){
		printf("a+b=%d\na-b=%d\na*b=%d\na/b=error",plus,minus,multiply,divide);
	}
	else{
		printf("a+b=%d\na-b=%d\na*b=%d\na/b=%d",plus,minus,multiply,divide,a/b);
	}
	return 0;
} 
