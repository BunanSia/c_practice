#include<stdio.h>

int main(){
	printf("Chhiann su-jip chit chhoan soo-liat\n");
	long str;
	char a[50];
	int i;
	scanf("%ld",&str);
	while(str!=0){
		if(str%2==1){
			a[i]='1';
			i++;
			str=(str-1)/2;
		}

		else{
			a[i]='0';
			i++;
		    str=(str/2);	
		}
	

	}
		int j;
		for(j=i;j>=0;j--){
			printf("%c",a[j]);
		}
	return 0;
} 
