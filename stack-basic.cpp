#include<stdio.h>

#define CAPACITY 5

int isFull(int t){
	if (t==CAPACITY-1)
	return 0;
	else
	return 1;
}
int isEmpty(int t){
	if(t==-1)
	return 0;
	else
	return 1;
}
int push(int t){
    if(isFull(t)){
	return 1;
	}

	else
	scanf("%d",&temp);
	t++;
}
int pop(int t){
	if(isEmpty(t)){
	return 1;
	}
	else
	t--;
}

int main(){
	
} 
