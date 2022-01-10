#include <stdio.h>
#include <math.h>
int main(){
	int n;
	double sinc,s;
	scanf("%d\n",&n);
	printf("n = %d\n",n);
	
	while(n>=360){
		n=n%360;
	}
	s=sin(n);
	
	if(n==0){
		sinc=1;
	}else{
		sinc=sin(n)/n;	
	}
	printf("sin is %f\n",s);
	printf("sinC is %f\n",sinc);
	
	
	
	
	
	
	
	/*#include <stdio.h>
	#include <math.h>

	int main(){
    double x;
    double result;

    x = 2.3;
    result = sin(x);
    printf("sin(%.2lf) = %.2lf\n", x, result);

    x = -2.3;
    result = sin(x);
    printf("sin(%.2lf) = %.2lf\n", x, result);

    x = 0;
    result = sin(x);
    printf("sin(%.2lf) = %.2lf\n", x, result);


    return 0;
}
	*/
	
	
	
	
	
	
	
	
	
	
	/*int a,b;
	printf("Please put the length of line AB & AC\n");
	scanf("%d\n",&a);
	printf("\n");
	scanf("%d",&b);
	while(a>=b){printf("AB must be smaller than AC, please try again\n");
		scanf("%d\n",&a);
	printf("\n");
	scanf("%d",&b);
	}
		double c;
	c=(a/1.0)/(b/1.0);
	printf("sinC is %f",c);*/
		return 0;
	}
	


