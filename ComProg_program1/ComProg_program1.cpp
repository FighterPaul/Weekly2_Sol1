#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <cstdlib>
int main()						//Problem 25, Solution 1, ID Student 65010902
{
	int n; 
	scanf("%d", &n);
	
	int y = n - 1, x = -(n - 1);

	
	while (y >= 0)
	{
		while (x <= (n - 1))
		{
			if (abs(x) + abs(y) <= (n - 1))
				printf("*");
			else
				printf(" ");
			x = x + 1;
		}
		printf("\n");
		y = y - 1;
		x = -(n - 1);
	}

	

	return 0;
}