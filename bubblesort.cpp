#include<stdio.h>
#define MAX 30

void swap(int*a,int*b);
void bubble(int data[MAX],int a);
void printf(int data[MAX],int a);

int main(){
	int data[MAX],a,i;
	a=0;
	for(i=0;data[i-1]>=0;i++){
		scanf("%d",&data[i]);
		a++;
	}
	a=a-1;
	printf("%d\n",a);
	bubble (data,a);
	return 0;
}

void swap(int*a,int*b){
	int temp=0;
		temp=*a;
		*a=*b;
		*b=temp;
}
void printf(int data[],int a){
	int i;
	for(i=0;i<a;i++){
		printf("%d",data[i]);
	}
}

void bubble(int data[],int a){
	int i,j,anything;
	for(i=0;i<a;i++){
	printf (data,a);
	scanf("%d",&anything);
	for(j=a-1;j>i;j--){
	if(data[j-1]>data[j])
	swap(&data[j-1],&data[j]);
	}
	}
}



