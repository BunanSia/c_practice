#include<stdio.h>

int rootminus(int a,int b,int c){
	int i;
	for(i=0;((i+1)*(i+1)*a+(i+1)*b+c)!=0;i--)
    {
	}
	return i+1;
}

int rootplus(int a,int b,int c){
	int i;
	for(i=0;((i-1)*(i-1)*a+(i-1)*b+c)!=0;i++)
    {
	}
	return i-1;
}


int main(){
	int a,b,c;
    scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("\n");
	if(b*b-4*a*c==0){
		if((-b/2*a)>0){
		printf("%d",rootplus(a,b,c));
	} 
	    else if((-b/2*a)<0){
	    printf("%d",rootminus(a,b,c));
		}
		else
		printf("x=0");
} 
    else if(b*b-4*a*c<0){
		printf("x doesn't exist'");		
} 
    else{
    	printf("%d,%d",rootminus(a,b,c),rootplus(a,b,c));
	}
	return 0;
}
