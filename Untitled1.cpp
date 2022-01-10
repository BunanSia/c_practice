#include<stdio.h>
int*  order(int t1,int t2,int t3,int t4){
  int i,a[5],j,g;
  a[0]=t1;
  a[1]=t2;
  a[2]=t3;
  a[3]=t4;
  
  for(int i=0;i<4;i++){
   for(int j=i+1;j<=3;j++){
    if(a[i]>a[j]){
     g=a[i];
     a[i]=a[j];
     a[j]=g;
    }
   } 
  }
  return a;
}

void geometric_sequence(int t1,int t2,int t3,int t4){
 int t5;
 if((t4/t3)==(t3/t2)&&(t3/t2)==(t2/t1)){
   t5=(t4*t4/t3);
 printf("This is a geometric sequence and the fifth number is %d \n",t5);
 }else{
  printf("This is not a geometric sequence \n");
 }
 
}

void arithmetric_progression(int t1,int t2,int t3,int t4){
 int t5;
 if((t4-t3)==(t3-t2)&&(t3-t2)==(t2-t1)){
   t5=(t4+t4-t3);
 printf("This is a arithmetric_progression and the fifth number is %d \n",t5);
 }
else
 printf("This is not a arithmetric_progression \n");
}
int main(){
 int t1,t2,t3,t4;
 int* a;
 printf("Now please put the sequence 1 by 1\n");
 scanf("%d",&t1);
 printf("\n");
 scanf("%d",&t2);
 printf("\n");
 scanf("%d",&t3) ;
 printf("\n");
 scanf("%d",&t4);
 printf("\n");
 a=order(t1,t2,t3,t4);
 printf("%5d %5d %5d %5d ",*a,*(a+1),*(a+2),*(a+3));
 geometric_sequence(t1,t2,t3,t4);printf("\n");
 arithmetric_progression(t1,t2,t3,t4);printf("\n");
 return 0;
 
}
