#include<stdio.h>

/*void Fibonacci(int n){
	int i;
	int a[50];
	a[0]=0;
	a[1]=1;
	printf("%d+",a[1]);
	for(i=2;i<=n;i++){
		if(i!=n){
			a[i]=a[i-1]+a[i-2];
		    printf("%d+",a[i]);
		}
		else {
		a[n]=a[n-1]+a[n-2];
		printf("%d",a[i]);
		}

	}

} */

int Fibonacci(int n){

	if(n<=1){
	return n;
	
	}
	else
	return Fibonacci(n-1)+Fibonacci(n-2);
}

int main(){
	int n;
	printf("Li ai joa tng e soo liat?\n");
	scanf("%d",&n);
	
	
		printf("%d",Fibonacci(n));
	return 0;
}
