#include<stdio.h>
void geometric_sequence(int t1,int t2,int t3,int t4){
	int t5;
	if((t4/t3)==(t3/t2)&&(t3/t2)==(t2/t1)){
		t5=t4/t3*t4;
		printf("This is a geometric sequence and the fifth number is %d\n",t5);
	}else{
		printf("This is not a geometric sequence \n");
	}
}

void arithmetric_progression(int t1,int t2,int t3,int t4){
	int t5;
	if((t4-t3)==(t3-t2)&&(t3-t2)==(t2-t1)){
		t5=t4-t3+t4;
		printf("This is a arithmetric_progression and the fifth number is %d\n",t5);
	}else{
		printf("This is not a arithmetric_progression \n");
	}
}


int main(){
	int t,a[5],g;
	printf("Now please put the sequence 1 by 1\n");
	scanf("%d\n",&t);
	while(t){
		t--;
		for(int i=0;i<4;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<4;i++){
			for(int j=i+1;j<=3;j++){
				if(a[i]>a[j]){
					g=a[i];
					a[i]=a[j];
					a[j]=g;
				}
			}	
		}
		
		printf("\n");
		geometric_sequence(a[0],a[1],a[2],a[3]);
		printf("\n");
		arithmetric_progression(a[0],a[1],a[2],a[3]);
		
	}
	
	return 0;
}
