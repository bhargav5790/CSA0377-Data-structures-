#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[20], i, num, pos,count,flag=0;
    printf("Enter how many elements in the array:");
    scanf("%d",&count);
    printf("Enter any %d elements: ",count);
    for(i=0;i<count;i++)
    {
    	scanf("%d",&arr[i]);
	}
    printf("\nEnter a Number to Search: ");
    scanf("%d", &num);
    for(i=0; i<count; i++)
    {
        if(arr[i]==num)
        {
            flag=1;
			pos=i;
            break;
        }
	}
    if(flag==1)
    {
    	printf("\nFound at Index No.%d", pos);
	}
    else
		{
			printf("\nElement not found");
		}
    return 0;
}