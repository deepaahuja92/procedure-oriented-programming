#include<stdio.h>
#include<math.h>
#define size 3

int main()
{
	int m1[size][size],m2[size][size],add[size][size],row,col;

	printf("Enter elements into matrix m1 of size 3x3 : ");
	for(row=1; row<=size; row++)
	{
		for(col=1; col<=size; col++)
		{
			scanf("%d",&m1[row][col]);
		}
	}

	printf("Enter elements into matrix m2 of size 3x3 : ");
	for(row=1; row<=size; row++)
	{
		for(col=1; col<=size; col++)
		{
			scanf("%d",&m2[row][col]);
		}
	}

	for(row=1; row<=size; row++)
	{
		for(col=1; col<=size; col++)
		{
			add[row][col] = m1[row][col] + m2[row][col];
		}
	}

	printf("Sum of matrices m1 + m2 = \n");
	for(row=1; row<=size; row++)
	{
		for(col=1; col<=size; col++)
		{
			printf("%d ",add[row][col]);
		}
		printf("\n");
	}

	return 0;
}