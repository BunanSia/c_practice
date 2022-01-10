#include<stdio.h>
void Hanoitower(int n,char from_rod,char end_rod,char aux_rod){
	if(n==1){
		printf("Move disk 1 from %c to %c \n ",from_rod,end_rod);
		return;
	}
	Hanoitower(n-1,from_rod,aux_rod,end_rod);
	printf("Move disk %d from %c to %c \n",n,from_rod,end_rod);
	Hanoitower(n-1,aux_rod,end_rod,from_rod);
}

int main(){
	char from_rod,aux_rod,end_rod;
	from_rod='A';
	aux_rod='B';
	end_rod='C';
	int n;
	scanf("%d",&n);
	Hanoitower(n,from_rod,aux_rod,end_rod);
	return 0;
}
