#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int F=-1,R=-1,Que[SIZE];

void enqueue()
{
	int ele;
	printf("Enter the element to be insert");
	scanf("%d",&ele);
	if(R==SIZE-1)
	{
		printf("The queue is full");
	}
	else
	{
		if(F==-1 && R==-1)
		{
			F=R=0;
		}
		else
		{
			R=R+1;
			Que[R]=ele;
		}
	}
}
void dequeue()
{
	int ele;
	if(F==-1 && R==-1)
	{
		printf("queue is empty");
	}
	else
	{
		ele=Que[R];
		
		printf("The deleted ele=%d",ele);
	}
}

void display()
{
	int i;
	if(F==-1 && R==-1)
	{
		printf("The queue is empty");
	}
	else
	{
		printf("Current Queue : \n");
		for(i=F;i<=R;i++)
		{
			printf("%d\t",Que[i]);
		}
	}
}

int main()
{
	int choice;
	do
	{
		printf("\nMAIN MENU\n");
		printf("\n1.Enqueue \n2.Dequeue \n3.DISPLAY \n4.EXIT\n");
		printf("Enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				enqueue();
				break;
			}	
			case 2:
			{
				dequeue();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				exit(0);
			}	
		}
	}while(choice>0 && choice<=SIZE);
	return 0;
}