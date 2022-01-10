#include<stdio.h>
#define CAPACITY 5
int queue[CAPACITY];

void deleted(int front, int rear){
if (rear==front){
	printf("Queue is empty");
}

else{

	while(rear>0){
    int a;
	queue[rear-1]=queue[rear];
	rear--;	
	}
}
int i;
for(i=0;i<CAPACITY;i++){
	printf("%d",queue[i]);
}};
void insert(int front, int rear){
if (rear==CAPACITY){
printf("Queue is full");
}
else{
    while(rear<CAPACITY){
    int a;
	scanf("%d",&a);
	printf("\n");
	queue[rear]=a;
	rear++;
	a=0;
	}
	
}
int i;
for(i=0;i<CAPACITY;i++){
	printf("%d",queue[i]);
}
}

int main(){
int rear=0;
int front=0;
insert(0,0);
deleted(0,5);

return 0;
}

