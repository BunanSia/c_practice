void digitize(char* infix){
	int n=0,count=0,top,i=0,i_next;
	//Push it in the stack if it's a digit and calculate how many digit we have stored by the int y
	while(infix[i]!='\0'){
		if(infix[i]!='('||infix[i]!=')'||infix[i]!='+'||infix[i]!='-'||infix[i]!='*'||infix[i]!='/'){
			n=n*10+infix[i]-'0';
			count++;
				//i=5 count=5
				//4   2
		}else{
			if(n!=0){
				infix[i-count]=n+'0';
				for(i_next=i-count+1;infix[i_next-1]!='\0';i_next++){
					infix[i_next]=infix[i_next+count-1];
				}
				i=i-count+1;
				n=0;
				count=0;		
			}
		}
		i++;
	}
}
