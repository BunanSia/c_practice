#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

void randgen( int dice[100], int N){
   int i;
   time_t t;
   
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < N ; i++ ) {
      dice[i]=(rand() % 6)+1;
}

}
void showDice(int dice[100], int N){
	int i;
	for(i = 0 ; i < N ; i++){
	printf("%d\n",dice[i]);
}
}
void showStatistics(int dice[100], int N){
	int a,b,c,d,e,f,i;
	a=0;b=0;c=0;d=0;e=0;f=0;
	for(i=0;i<N;i++){
	switch(dice[i]){
	case 1:a++;
	break;
	case 2:b++;
	break;
	case 3:c++;
	break;
	case 4:d++;
	break;
	case 5:e++;
	break;
	case 6:f++;
	break;}	
	}
	printf("1 chhut-hain %d pai\n2 chhut-hain %d pai\n3 chhut-hain %d pai\n4 chhut-hain %d pai\n5 chhut-hain %d pai\n6 chhut-hain %d pai\n",a,b,c,d,e,f);
}


int main(){
   srand(time(NULL));
   int dice[MAX];
   int N;
   scanf("%d",&N);
   printf("\n");
   randgen(dice, N);  // ?? rand()%6+1 ????(??1~6)
   showDice(dice,N);
   showStatistics(dice,N);
   return 0;
}   


