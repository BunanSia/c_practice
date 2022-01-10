#include<stdio.h>

int main(){
	int i,j,k,l;
	char a[50],b[50];
	for(i=0;a[i-1]!='\n';i++){
	scanf("%c",&a[i]);
	}
	for(j=0;b[j-1]!='\n';j++){
	scanf("%c",&b[j]);
	}
	int c,d;
	k=0;
	for(c=0;c<(i-2);c++){
		for(d=0;d<(j-2);d++)
		if(b[d]==a[c]){
		k++;
		break;
		}
		}
		
	if (k==(j-2)&&i==j){
		printf("Sann kang");
	} 
	else if (k==(j-2)&&i!=j){
		printf("Siang siok");
	}
	else if(k>=1&&k!=(j-2)){
		printf("Liankip");
	}
	else if(k==0){
		printf("Bo kau chhap");
	}
	    
return 0;
}
