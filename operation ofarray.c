#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int a[SIZE],n=5;

void create()
{
	int i,n;
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void insert()
{
	int i,pos,ele;
	printf("Enter the element and position:");
	scanf("%d %d",&ele,&pos);
	for(i=n-1;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=ele;
}
void delete()
{
	int i,pos;
	printf("Enter the position:");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
}
void display()
{
	int i;
	printf("The elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

int main()
{
	int choice;
	do
	{
		printf("MAIN MENU\n");
		printf("\n1.Create \n2.Insert \n3.Delete \n4.DISPLAY \n5.EXIT\n");
		printf("Enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				create();
				break;
			}	
			case 2:
			{
				insert();
				break;
			}
			case 3:
			{
				delete();
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
	}while(choice>0 && choice<=4);
	return 0;
}