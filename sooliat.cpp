#include<stdio.h>
#include<string.h>

int tokit(int* sooliat,int arraysize){
	int i,j;
	int num=sooliat[0];
	for(i=1;i<arraysize;i++){
		num^=sooliat[i];
}
return num;
}

int main(){
	int array[]={10,10,11,11,18};
	int arraysize=5;
	int ans;
    ans=tokit(array,arraysize);
    printf("Tat-an si %d",ans);
    return 0;
}
 
