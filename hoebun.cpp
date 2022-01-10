#include<stdio.h>
#include<string.h>

int main(){
	int i,k,j;
	char a[50];
	k=0;i=0;
	for(k=0;a[k-1]!='\n';k++){
	scanf("%c",&a[k]);
	}
	while(a[i]==a[k-i-2]&&i<=((k-2)/2)){
		i++;
	}
	if(i==(k/2)){
		printf("hoebun");
	}

    else{
    printf("msi hoebun");    	
	}

    return 0;
}
