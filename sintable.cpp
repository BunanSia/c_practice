#include<stdio.h>
#include<math.h>

int main(){
int	i=0;
double c;
double interval;

while(c<1&i<20){
	 interval=i/10.0;
	 c=sin(i);
double d=cos(i);
	printf("sin(%f)=%f,cos(%f)=%f\n",interval,c,interval,d);
	i++;
	}

printf("\n");
return 0;
}
