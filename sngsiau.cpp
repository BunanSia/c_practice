//1+2*3+(4+5)
//123*+45++

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char stack[50];
int top=-1;

int priority(char x){
	char priority[5]={'(','-','+','*','/'};
	for(int i=0;i<5;i++){
		if(x==priority[i])
		return i;
	}
	return -1;
}

bool IsDigit(char x){
	if(x=='0'||x=='1'||x=='2'||x=='3'||x=='4'||x=='5'||x=='6'||x=='7'||x=='8'||x=='9')
	return true;
	return false;
}

void push(char item){
	if (top>=49){
		printf("Stack full!\n");
		return ;
	}
	stack[++top]=item;
}

char pop(){
	if (top==-1){
		printf("Stack empty!\n");
		exit;
	}
	return stack[top--];
}

void stackPrint(){
	int i;
	printf("stack =");
	for (i=0; i<=top; i++)
		printf(" %c", stack[i]);
	printf("\n");
}


bool IsEmpty(void)
{
	return (top < 0) ? true : false; 
}


bool IsFull()
{
	return (top >= 49) ? true : false;
}


char top_data()
{
	return stack[top]; 
}
int calculate(char postfix[]){
	int i=0;
	int j=0;
	char x;
	int a,b;
	 
	
	while((x=postfix[i++])!='\0'){
		switch(x){
		int y;
		case '*':a=pop()-'0';
                 b=pop()-'0';
		         y=b*a;
		         push(y+'0');
		         break;
		case '/':a=pop()-'0';
                 b=pop()-'0';
				 y=b/a;
		         push(y+'0');
		         break;
		case '-':a=pop()-'0';
                 b=pop()-'0';
				 y=b-a;
		         push(y+'0');
		         break;
		case '+':a=pop()-'0';
                 b=pop()-'0';
				 y=b+a;
		         push(y+'0');
		         break;
		
		default:if(IsDigit(x)){
            push(x);
		}
		}
		stackPrint();         
	}
    return pop()-'0';
}
void to_postfix(char infix[],char postfix[]){
	int i=0;
	int j=-1;
	char x,y;
	while((x=infix[i++])!='\0'){
		switch(x){
			case '(':push(x);
				break;
			case ')':while(!IsEmpty()&&(y=pop())!='('){
				postfix[++j]=y;}
				break;
			case '+':
			case '-':
			case '*':
			case '/':
				y=top_data();
                while(priority(y)>=priority(x)){
                	postfix[++j]=pop();
                	y=top_data();}				
                push(x);
				break;
			
			default:postfix[++j]=x;
		}
		stackPrint();
	}
	while(!IsEmpty()){
			postfix[++j]=pop();
			stackPrint();
		}
	postfix[++j]='\0';
}


int main(){
char infix[50];
for(int i=0;i<50;i++){
	scanf(" %c",&infix[i]);
	if(infix[i]=='j'){
		infix[i]='\0';
		break;	
}
}
char postfix[50];
to_postfix(infix,postfix);
for(int i=0;postfix[i]!='\0';i++){
	printf(" %c",postfix[i]);
}
printf("\n");
printf("Ans is %d",calculate(postfix));
return 0;
} 
