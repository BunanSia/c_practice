#include<stdio.h>

int main(){
	char a;
	int b[10],i,sum=0,n1,n2;
	
	for(i=0;b[i-1]!='\n';i++);
	{
		scanf("%s",&b);
	}
	sum=0;
	printf("%s",b);
	char ch [26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q'};
	int as[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
		for(int i=0;i<=25;i++) 
		{
			if(b[0]==ch[i])
			{
				n1=(as[i]%10)*9; 
				n2=as[i]/10;
				sum=n1+n2;
			}
		}
	
	for(i=1;i<10;i++)
	{
		b[i]=b[i]-'0';
		b[i]=(b[i]*(10-i));
	sum+=b[i];
	}	

printf("\n");
if(sum%10==0){
	printf("true\n");
} 
else{
	printf("false\n");
}
return 0;
}


