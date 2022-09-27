#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int top=-1,stk[SIZE];

void push()
{
	int ele;
	printf("Enter the element to be insert");
	scanf("%d",&ele);
	if(top==SIZE-1)
	{
		printf("The stack is full");
	}
	else
	{
		top=top+1;
		stk[top]=ele;
	}
}
void pop()
{
	int ele;
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		ele=stk[top];
		top=top-1;
		printf("The deleted ele=%d",ele);
	}
}
void peek()
{
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("Top element:%d",stk[top]);
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("The stack is empty");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stk[i]);
		}
	}
}

int main()
{
	int choice;
	do
	{
		printf("MAIN MENU\n");
		printf("\n1.PUSH \n2.POP \n3.PEEK \n4.DISPLAY \n5.EXIT\n");
		printf("Enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				push();
				break;
			}	
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				peek();
				break;
			}
			case 4:
			{
				display();
				break;
			}
			case 5:
			{
				exit(0);
			}	
		}
	}while(choice>0 && choice<=SIZE);
	return 0;
}