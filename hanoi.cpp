#include<stdio.h>


int hanoi(int n);

int main(){
    int n;
	printf("Put the plates you wanna move\n");
	scanf("%d",&n);
	printf("%d",hanoi(n));
	return 0;	
} 

int hanoi(int n){
	if(n>1){
	return 2*hanoi(n-1)+1;
	}
	else{ 
	return 1;}
	} 
