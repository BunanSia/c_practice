#include<stdio.h>

int circle(int i){
	if(i>1){
		return 2*(i-1)+circle(i-1);
	}

	else{
		return 2;
	}

	
}

int main(){
	int i;
	scanf("%d",&i);
	printf("%d",circle(i));
	return 0;
} 
