#include <stdio.h>
#define max 5

int top = -1, stack[max];
void push();
void pop();
void peep();
void change();
void show();

void push(int x)
{
    if (top == max - 1)
    {
        printf("\nOverflow!!"); 
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d", &x);
        top = top + 1;
        stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element: %d", stack[top]);
        top = top - 1;
    }
}
int peep(int position)
{
	if(top-poistion+1<0)
	{
		printf("Invalid Positon :");
	}
	else
	{
		int i=(top-position+1);
		return stack[i];
	}
}
int change(int position,int value)
{
	if(top-poistion+1<0)
	{
		printf("Invalid Positon :");
	}
	else
	{
		stack[top-position+1]=value;
	}
}
void show()
{
	int i;
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (i = top; i >= 0; --i)
            printf("%d\n", stack[i]);
    }
}
int main()
{
	int choice,position,value;
    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.peep the element\n4.change the element\n5.Show\n6.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
        	scanf("%d",&position);
            peep(position);
            break;
        case 4:
    	   	scanf("%d %d",&position,&value);
            change(position,value);
            break;
        case 5:
            show();
            break;
        case 6:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
}

