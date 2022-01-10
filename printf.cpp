#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
double interval,sine;
int i;
for(i = 0; i <30; i++)
{
 interval = i/10.0;
 sine=sin(interval);
 printf("sin( %f ) = %f \n", interval, sine);
}



printf("\n+++++++\n¡");
return 0;
}
