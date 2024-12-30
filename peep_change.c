#include<stdio.h>
#define max 5
int stack[max],top=-1;
// push
void push(int data)
{
	if(top>=max-1)
	{
		printf("stack is overflow");
	}
	else
	{
		top++;
		stack[top]=data;
		printf("pushed %d on the stack\n",data);
	}
}
	//pop
int pop(){
	if(top<0)
	{
		printf("stack under flow\n");
		return-1;
	}
	else
	{
		top--;
		return stack[top+1];
	}
}
// Peep
int peep(int position)
{
	if(top-position+1<0)
	{
		printf("invalid position");
	}
	else
	{
		int i=(top-position+1);
		return stack[i];
	
	}
}
//change
void change(int position,int value)
{
	if(top-position+1<0)
	{
			printf("invalid position");
	}
	else
	{
	
	    stack[top-position+1]=value;
	}
}
//display
int i,top;
void display()
{
	if(top<0)
	{
		printf("stack is empty\n");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}
int main()
{
	int data,position,choice,value;
	while(1)
{
	    printf("\nPerform operations on the stack:");
		printf(" Enter 1: push\n Enter 2: pop\n Enter 3: peep\n Enter 4: change\n Enter 5: display\n Enter 6: exit\n");
		scanf("%d",&choice);
	
		switch(choice)
		{
		case 1:
			printf("Enter the data for push\n");
			scanf("%d",&data);
			push(data);
			break;
			
		case 2:
			pop(data);
			break;
			
		case 3:
			printf("Enter the postion for peep\n");
			scanf("%d",&position);
			peep(position);
			break;
			
		case 4:
			printf("Enter the postion for change\n");
			scanf("%d",&position);
			scanf("%d",&value);
			change(position,value);
			break;
			
		case 5:
			display(data);
			break; 
		case 6:
			printf(" Exit for program");
			return 0;
			break;
		default:
			printf(" Invalid chioice");
		}
	
}
}
	

