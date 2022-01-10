#include<stdio.h>
#include <stdlib.h>
#define CAPACITY 5

int pop(void);
void push(int);
int peek(void);
void traverse(void);
int isEmpty(void);
int isFULL(void);
int stack[CAPACITY];
int top=-1;
int main(){
int CHOICE,ELE;
while(1){
	printf("1. Push \n");
    printf("2. Pop \n");
    printf("3. Peek \n");
    printf("4. Traverse \n");
    printf("5. Quit \n");
    printf("Enter your choice \n");
    scanf ("%d",&CHOICE);



switch(CHOICE){
case 1:printf("Enter element:\n");
    scanf("%d",&ELE);
    push(ELE);
    break;
case 2:ELE=pop();
    if(ELE==0){
	    printf("Stack is underflow\n");
    } 
    else{
	    printf("Poped element is %d \n",ELE);
	 
    }
    break;
case 3:ELE=peek();
    if(ELE==0){
	    printf("Stack is underflow \n");
    } 
    else{
	    printf("Poped element is %d\n",ELE);
	
    }
    break;
case 4:traverse();
    break;
case 5: exit(0);
    break;
default: printf("Invalid value \n");
    break;
		}
		}
}
void push(int ELE){
	if(isFULL()){
		printf("Stack is overflow \n");
	}
	else{
		stack[++top]=ELE;
		printf("%d pushed\n",ELE);
		
	}
}
int isFULL(){
	if(top==CAPACITY-1){
		return 1;
	}
	else{
		return 0;
	}
}
int pop(){
	if(isEmpty()){
		return 0;
	}
	else{
		return stack[top--];
	}
}
void traverse(){
	int i;
	for(i=0;i<=top;i++){
		printf("%d \t\n",stack[i]);
	}
}
int isEmpty(){
	if(top==-1)
	return 1;
	else
	return 0;
} 
int peek(){
	if(isEmpty()){
		return 0;
	}
	else{
		return stack[top];
	}
}
