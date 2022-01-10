#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int siongka(int i,int j){
	if(j>0){
				printf("%d+%d+",i,j);
		return i+j+siongka(i,j-1);	
	}
	else{ 
	printf("0=\n");
	return 0;} 

}
int main(){
	int n1,n2;
	printf("Chhia su-jip li ai siong ka e nng-e soo\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	printf("%d",siongka(n1,n2));	
	return 0;
}
