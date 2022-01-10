#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int angle;
	float sine;
	printf("Please put a value greater than 0\n");
	scanf("%d",&angle);
	sine=sin(angle);
	printf("Sine of this value is %f",sine);
	return 0;
}
