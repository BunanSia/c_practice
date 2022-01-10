#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	int temp, sum=0;
	temp=a;
	int i;
	while(a>0){
		int b;
		i=a%10;
		a=a/10;
		int fac=1;
		for(b=i;b>1;b--)
		{
			fac=fac*b;
		}
		
		sum=sum+fac;
			}
			a=temp;
			if(temp==sum){
				printf("%d is a strong number",a);
			}
			else
			printf("%d is a not strong number",a);
} 
