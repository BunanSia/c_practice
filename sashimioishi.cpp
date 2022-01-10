#include<stdio.h>
void prchar(char c,int n){
	for(int i=0;i<n;i++){
		printf("%c",c);
	}
}

void typePrint(int t,int h,int i){
	switch(t){
		case 1:
			prchar('*',i);
			prchar(' ',h-i);
			break;
		case 2:
			prchar(' ',h-i);
			prchar('*',i);
			break;
		case 3:
			prchar('*',h-i+1);
			prchar(' ',i-1);
			break;
		case 4:
			prchar(' ',i-1);
			prchar('*',h-i+1);
			break;
		
	}
	
}



void showAllTri(int height, int a1, int a2){
	for(int i=1;i<=height;i++){
		typePrint(a1,height,i); printf(" ");
		typePrint(a2,height,i); printf("\n");
	}
}

int main(){

int t1, t2, t3, t4,n;
int height;
printf("Enter height: \n");
scanf("%d", &height);
if(height<0){
	printf("nothing!\n");
}
while(height>0){
	printf("Enter the order(1~4): \n");
	int g=0;
	do{	
		g=0;
		scanf("%d",&n);
		t4=n%10;
		n=n/10;
		printf("%d",t4);
		t3=n%10;
		n=n/10;
		printf("%d",t3);
		t2=n%10;
		n=n/10;
		printf("%d",t2);
		t1=n;
		printf("%d\n",t1);
		
		if(t1<0||t1>4){	
			printf("number1 is error,again\n");
			g=1;
		}else if(t2<0||t2>4){
			printf("number2 is error,again\n");
			g=1;
		}else if(t3<0||t3>4){
			printf("number3 is error,again\n");
			g=1;
		}else if(t4<0||t4>4){
			printf("number4 is error,again\n");
			g=1;
		}
	}while(g);
	
	
	

	
	
	
	/*do{
		scanf("%d", &t1);
		if(t1<0||t1>4){
			printf("error,again\n");
		}
	}while(t1<0||t1>4);

	do{
		scanf("%d", &t2);
		if(t2<0||t2>4){
			printf("error,again\n");
		}
	}while(t2<0||t2>4);

	do{
		scanf("%d", &t3);
		if(t3<0||t3>4){
			printf("error,again\n");
		}
	}while(t3<0||t3>4);

	do{
		scanf("%d", &t4);
		if(t4<0||t4>4){
			printf("error,again\n");
		}
	}while(t4<0||t4>4);*/

	showAllTri(height,t1,t2);
	showAllTri(height,t3,t4);
	printf("Enter height: \n");
	scanf("%d", &height);
}

}

