#include<stdio.h>


int twodimension(int i){
	if (i>0)
	return i+twodimension(i-1);
	else
	return 1;
} 

int threedimension(int i){
	if(i>0)
	return twodimension(i)+threedimension(i-1);
	else
	return 1;
}

int main(){
	int i;
	scanf("%d",&i);
	printf("%d",threedimension(i));
	return 0;
}
