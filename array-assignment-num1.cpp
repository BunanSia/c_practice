#include<stdio.h>
#include <stdlib.h>
int main()
{
   char file_name[25],ch,a[1000];
   int number;
   int i=0,j=0;
   FILE *fp;

   printf("Enter name of a file you wish to see\n\n");
   gets(file_name);

   fp = fopen(file_name, "r"); // read mode

   if (fp == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }

   printf("\n\nThe contents of %s file are:\n\n", file_name);

   while((ch = fgetc(fp)) != EOF){
   printf("%c", ch);
   a[i]=ch;
   i++;
   }
   
    fclose(fp);
    printf("\n\nThe avg of elephant weight is:\n\n");
    
    int B=0;
    int b[200];
    char c[6];
    int C=0;
    j=0;
    while(j<i){
    	if (a[j]!='\t')
		c[C++]=a[j++];
    	else{
    	b[B++]=atoi(c);
    	C=0;
		}
		
	}
    
	long long avg;
	avg=0;
	for(j=0;j<B;j++){
       avg+=b[j];
	}
	avg=avg/B;
   printf("%ld",avg);
   
   return 0;
}
