#include<stdio.h>
#include<conio.h>
int main()
{
    int i, arr[20], search, first, last, middle,count;
    printf("Enter how many numbers in the array:");
    scanf("%d",&count);
    printf("Enter %d elements (in ascending order): ",count);
    for(i=0; i<count; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter element to be search: ");
    scanf("%d", &search);
    first = 0;
    last = count-1;
    middle = (first+last)/2;
    while(first <= last)
    {
        if(arr[middle]<search)
            first = middle+1;
        else if(arr[middle]==search)
        {
            printf("\nThe number, %d found at Position %d", search, middle+1);
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last)
        printf("\nThe number, %d is not found in given Array", search);

    return 0;
}