#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[20], i, num, pos,count;
    printf("Enter how many numbers in the array:");
    scanf("%d",&count);
    printf("Enter any %d Numbers: ",count);
    for(i=0; i<count; i++)
    {
        scanf("%d", &arr[i]);
	}
    printf("\nEnter a Number to Search: ");
    scanf("%d", &num);
    for(i=0; i<count; i++)
    {
        if(arr[i]==num)
        {
            pos=i;
            break;
        }
    }
    printf("\nFound at Index No.%d", pos);
    return 0;
}