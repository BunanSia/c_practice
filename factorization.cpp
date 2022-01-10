/*factorization*/
#include<stdio.h>
#include<math.h>

int main(){
	int i,j=1;
	int k=0;
	printf("Please put an postive initiative\n");
	scanf("%d",&i);
	printf("\n");
	for(j=1;j<=i;j++){
			while(i%j==0&&i!=j){
				++k;
				printf("The %d factorization of %d is %d\n",k,i,j);
				break;
			}
	}
		printf("The %d factorization of %d is %d\n",k+1,i,i);
		printf("There are %d factorization of %d \n",k+1,i);
		if(k==2)
			printf("i is prime number");
		else
		    printf("i is not prime number");
		    
		
	
	
	
	return 0;
	
}
