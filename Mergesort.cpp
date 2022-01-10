#include<stdio.h>
#define MAX 50
/*You don't have girl friend*/ 
void merge(int a[],int A1,int m,int A2);
void mergesort(int a[],int A1,int A2);

int main(){
/*a[MAX] is the key to be sorted, A is the ultimate size*/

   int i,a[MAX];
   int A;

/*If you enter a negative value then it will jump out of the loop and the sorting will get started*/
   for(i=0;a[i-1]>=0;i++){
   scanf("%d",&a[i]);
   A++;  	
   }

/*Why '-2'? Because that negative number and the one after it will not be counted in the array*/
   A=A-2;

/*First I want to check if the original array is what exactly I want to sort*/
   for(i=0;i<A;i++){
   		printf("%d\t",a[i]);
   }

   printf("\n");

/*Here we go*/
   mergesort(a,0,A-1);
   
   printf("\n\n");
   
/*Print khoann mai*/
   for(i=0;i<A;i++){
   		printf("%d\t",a[i]);
   }
return 0;
} 

void merge(int a[],int A1,int m,int A2){
	int i,j,k,L,R;
	L=m-A1+1;
	R=A2-m;
/*Record the range of array we want to sort into two temporary arrays l,r*/ 
	int l[MAX];
	int r[MAX];
	
	for(i=0;i<L;i++){
		l[i]=a[i+A1];
	}
	for(i=0;i<R;i++){
		r[i]=a[m+i];
	}
	
/*Sort the two arrays: First to compare the element, the smaller the first to be recorded*/	
	i=0;
	j=0;
	k=0;
	int c[2*MAX];
	
	while(i<L&&j<R){
		if (l[i]<r[j]){
			c[k++]=l[i++];
		}
		else{
			c[k++]=r[j++];
		}
	}
/*Clean up the remaining elements within array*/
	while(i<L)
	    c[k++]=l[i++];
	while(j<R)
	    c[k++]=r[j++];

/*To record the sorted array c into our key array a*/
    int q;
	for(q=0;q<k;q++){
		a[A1+q]=c[q];
	}
/*Print the array to check if it has been recorded safely*/
	for(q=0;q<k;q++){
	    printf("%d\t",a[A1+q]);
	}
	
	printf("\n");
    
}

void mergesort(int a[],int A1,int A2){
	
/*First we shall determine from where to where is the range of array to be sorted, we separate it into two part, the middle point is m, we record the leftmost point as 
A1, the m for middle point and the r as the rightmost point*/

	if(A2>A1){
	int m;
	m=1+(A2-A1)/2;
	mergesort(a,A1,m);
	mergesort(a,m+1,A2);
    merge(a,A1,m,A2);
	}
}

