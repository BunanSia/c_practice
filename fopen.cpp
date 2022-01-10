#include <stdio.h>
#include <stdlib.h>
int main()
{
   char ch, file_name[25],a[100];
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
    printf("\n\nThe actual line is:\n\n");
    for(j=0;j<i;j++){
    	    a[j]=a[j]-7;
   putchar(a[j]);
	}

   return 0;
}
