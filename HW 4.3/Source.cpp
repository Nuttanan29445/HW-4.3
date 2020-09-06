#include <stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= 2 * n - 1; i++)
	{
		for (int j = 1; j <= 2 * n - 1; j++)
		{
			if (i + j <= 2 * n && i <= j || i >= j && i + j >= 2 * n)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}