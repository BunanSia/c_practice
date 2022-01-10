#include<stdio.h> 

int rsum(int n1,int n2){
	if(n1==n2){
		printf("%d\n",n1);
		return n2;
	}else{
		printf("%d +",n1);
		return n1+rsum(n1+1,n2);
	}
}

int main(){
	int n1,n2;
	printf("Input:\n");
	scanf("%d %d",&n1,&n2);
	printf("Output:\n%d",rsum(n1,n2));
	return 0;
}
