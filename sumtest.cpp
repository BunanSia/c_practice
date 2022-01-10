#include<stdio.h>
int main(){
	int M,D,S;
	printf("Please put the date today and I will show your destiny\n");
	scanf("%d",&M);
	if(M<=0||M>12)
	printf("Month can't be under 0 nor can't it be greater than 12");
	else
	scanf("%d",&D);
	if(D<=0||D>31)
	printf("Date can't be under 0 nor can't it be greater than 31");
	S=(M*2+D)%3;
	switch(S){
			case 0:printf("You are out of luck");
	break;
	case 1:printf("Theek hain");
	break;
	case 2:printf("You lucky guy");
	break;
	
	}

	return 0;
}
