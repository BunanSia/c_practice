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

int t1, t2, t3, t4;
int height;
printf("Enter height: \n");
scanf("%d", &height);
if(height<0){
	printf("nothing!\n");
}
while(height>0){
	printf("Enter the order(1~4): \n");
	do{
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
	}while(t4<0||t4>4);

	showAllTri(height,t1,t2);
	showAllTri(height,t3,t4);
	printf("Enter height: \n");
	scanf("%d", &height);
}

}


