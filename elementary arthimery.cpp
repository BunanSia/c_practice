#include<stdio.h>
#define N 50
char stack[N];
int top=-1;
int isEmpty(){
	return (top==-1)?1:0;
}
int isFull(void){
	if(top>=N){
		return 1;
	}
	else
	    return 0;
}
void stackPrint(){
	int i;
	printf("stack =");
	for (i=0; i<=top; i++)
		printf(" %c", stack[i]);
	printf("\n");
}

void push(char x){
	if(isFull())
		printf("The Stack is overflow \n");
		else
		stack[++top]=x;
    stackPrint();	
}

int pop(void){
	if(isEmpty())
		printf("The stack is underflow \n" );
	else
	  stackPrint();
	  return stack[top--];	
	  
}

//To check the top element of the stack for comparing if the priority of it is greater then the next element of infix or not
int peek(void){
	if(isEmpty())
		printf("The stack is underflow \n" );
	else
	  return stack[top];	
}

//To determine the priority of the operator
int op_priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

//To change infix into postfix
void to_postfix(char infixdone[],char postfix[]){
    int i=0,j=-1;
	char x,y;
	while((x=infixdone[x++])!='\0'){
		switch(x){
			case '(': push(x);
			break;
			case ')' :while(!isEmpty()&&(x=pop())!='(')//Pop all the element in front of (
			postfix[++j]=x;
			top--;
			break;
			case '+':
			case '-':
			case '*':
			case '/':y=peek();
			//Compare the priority of the operator and the top member of the stack
			//If the priority of the top element of the stack is greater then we pop it out and store it into postfix, and push the operator into stack
			        while (op_priority(y)>=op_priority(x)){
			        postfix[++j]=pop();
			        y=peek();
					}
			        push(x);
			        break;
			//Store the Digit into postfix
			default:postfix[++j]=x;
		}
	}
	//When the infix has all been sorted we pop out all these element in the stack and store it into postfix and add '\0' in the end to complete the postfix
	while(!isEmpty())
	postfix[++j]=pop();
	postfix[++j]='\0';
	//Checking the postfix
		for(i=0;postfix[i]!='\0';i++){
		printf("%c",postfix[i]);
	}
		printf("\n");
}
//To merge individual digit from '0' to '9' into a individual digit which can be greater than 10
void digitize(char infix[],char infixdone[]){
	int y=0;
	char x;
	int final=0;
	int i;
	for(i=0;infix[i]!='\0';i++){
	//Push it in the stack if it's a digit and calculate how many digit we have stored by the int y
	x=infix[i];
	if(x>='0'&&x<='9')
		push(x),y++;
	//If we are facing '(' we put it into the sorted infix(infixdone)
    else if(x=='(')
    infixdone[final++]=x;
    else{
    //If we are facing '+''-''*''/'')'we need to pop the number in our stack first and make it into an individual interger
    		int j,ten;
	ten=1;
	int num1=0;
	int num2=0; 
	//Whenver a new element being pop out, times 10 and add that element
	for(j=0;j<=y;j++){
		int popnum=(pop()-'0');
		num1=ten*num1+popnum;
		ten*=10;
	}
	//Now we get a reverse number, for instance we store the number 1234567 into 7654321, we need to reverse the order
	for(j=0;j<=y;j++){
        if (num1>=10){
        num2+=num1%10;
        num2*=10;
        num1=num1/10;
		}
		else num2+=num1;
	}
	//Store the sorted number and add '0' to make it a char and then put the operator or ) into the sorted infix
	infixdone[final++]=num2+'0';
	infixdone[final++]=x;
	//Initialize the value of y
	y=0;
	}

	}
	//Finalize the infix we have sorted
	infixdone[final++]='\0';
	//Print out the infix to check it has been done properly
	for(final=0;infixdone[final]!='\0';final++){
		printf("%c",infixdone[final]);
	}
		printf("\n");
}
//To identify if it's a digit or not
int isDigit(char x){
	if(x!='+'&&x!='-'&&x!='*'&&x!='/'&&x!='('&&x!=')'){
		return 1;
	}
	else return 0;
}
//To calculate the postfix
int calculate(char postfix[]){
	int i;
for(i=0;postfix[i]!='0';i++){
		if(isDigit(postfix[i])&&postfix[i]!='\0'){
			push(postfix[i++]);
		}
		else if(postfix[i]!='\0'){
			int a=pop();
			int	b=pop();
			int c=0;
			int x;
			x=postfix[i];
			switch(x){
				case '+':c=b+a;break;
				case '-':c=b-a;break;
				case '*':c=b*a;break;
				case '/':c=b/a;break;
			}
			push(c+'0');
		}
		else
		return pop()-'0';
		}
	}

int main(){
	char infix[50],infixdone[50],postfix[50];
	printf("Please put the equation to get the result you wish\n");
	scanf("%s",infix);
	digitize(infix,infixdone);
	to_postfix(done,postfix);
	printf("Answer %d",calculate(postfix));
	return 0;
}
