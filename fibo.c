#include<stdio.h>
int main()
{
	int count, first_term = 0, second_term = 1, next_term, i;
	printf("enter the number of terms:\n");
	scanf("%d",&count);
	printf("first %d terms of fibonacci series:\n",count);
	for(i=0; i<count;i++)
	{
		if (i<=1)
		next_term = i;
		else
		{
			next_term = first_term + second_term;
			first_term = second_term;
			second_term = next_term;
		}
		printf("%d\n",next_term);
	}
	return 0;
}