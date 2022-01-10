#include<stdio.h>

char multiply_divide(char str[50]){
	int j,l;
	char k[50];
	l=0;
	while(str[j]!='\n'){	
			switch(str[j]){
	case '*': str[j]=str[j-1]*str[j+1];k[l-1]=str[j];j+=2;l++;
	break;
	case '/': str[j]=str[j-1]/str[j+1];k[l-1]=str[j];j+=2;l++;
	break;
	default : k[l]=str[j];l++;j++;
	break;
	}
	printf("%c",k[l]); 
	}
		int i;
	for(i=0;k[i]!='\n';i++){
		str[i]=k[i];
	}
	printf ("%s",str);
}
char plus_minus(char str[50]){
	int j,l;
	char k[50];
	l=0;
	while(str[j]!='\n'){		
			switch(str[j]){	
	case '+': str[j]=str[j-1]+str[j+1];k[l-1]=str[j];j+=2;l++;
	break;
	case '-': str[j]=str[j-1]-str[j+1];k[l-1]=str[j];j+=2;l++;
	break;
	default : k[l]=str[j];l++;j++;
	break;}

	}
	int i;
	for(i=0;k[i]!='\n';i++){
		str[i]=k[i];
	}
	printf ("%s",str);
	}


int main(){
   char str[50],str_1[50],str_2[50]; 
   scanf("%[^\n]%*c", str); 

   multiply_divide(str);
   plus_minus(str); 

   printf ("%s",str);
   
   return 0;
   
}
