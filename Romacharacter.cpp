/*
I	1
V	5
X	10
L	50
C	100
D	500
M	1,000
*/
#include<stdio.h>
#include<math.h>

int main(){
	char N1[10],N2[10];
	int sumN1=0,sumN2=0,i;
	printf("Put two Roma number string, please note that it can be combination of IVXLCDM only\n");
	scanf("%10s",N1);
	printf("\n");
	scanf("%10s",N2);
	printf("\n");
	
	
	for(i=0;i<10;i++){
	switch(N1[i]){	
	case 'I' :sumN1=sumN1+1;
break;
	case 'V' :sumN1=sumN1+5;
break;
	case 'X' :sumN1=sumN1+10;
break;
	case 'L' :sumN1=sumN1+50;
break;
	case  'C':sumN1=sumN1+100;
break;
	case 'D' :sumN1=sumN1+500;
break;
	case 'M' :sumN1=sumN1+1000;
break;
	}
	}
	printf("sumN1=%d\n",sumN1);
	for(i=0;i<10;i++){
	switch(N2[i]){	
	case 'I' :sumN2=sumN2+1;
break;
	case 'V' :sumN2=sumN2+5;
break;
	case 'X' :sumN2=sumN2+10;
break;
	case 'L' :sumN2=sumN2+50;
break;
	case  'C':sumN2=sumN2+100;
break;
	case 'D' :sumN2=sumN2+500;
break;
	case 'M' :sumN2=sumN2+1000;
break;
	}
	}
	printf("sumN2=%d\n",sumN2);
	
	int result,times;
	result=abs(sumN1-sumN2);
	
	times=result/1000;
	for(i=0;i<times;i++){
		printf("M");
	}
	result=result%1000;
	
	times=result/500;
	for(i=0;i<times;i++){
		printf("D");
	}
	result=result%500;

	times=result/100;
	for(i=0;i<times;i++){
		printf("C");
	}
	result=result%100;
	
	times=result/50;
	for(i=0;i<times;i++){
		printf("L");
	}
	result=result%50;
	
	times=result/10;
	for(i=0;i<times;i++){
		printf("X");
	}
	result=result%10;
	
	times=result/5;
	for(i=0;i<times;i++){
		printf("V");
	}
	result=result%5;

	times=result/1;
	for(i=0;i<times;i++){
		printf("I");
	}
	result=result%1;
	
	return 0;
}
