#include<stdio.h>
void insertion_sort(int a[],int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{
		j=i;
		while(a[j]<a[j-1] && j>0)
		{
			t=a[j];
			a[j]=a[j-1];
			a[j-1]=t;
			j--;
		}
	}
}

int main()
{
	int i,n,a[100];
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	printf("Enter the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	insertion_sort(a,n);
	printf("The sorted elements in array\n ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}