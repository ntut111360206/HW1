#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j,u,s=1;
	for (i = 1; i <= 5; i++)
	{
		for (u = i; u < 10; u++)
		{
			printf(" ");
		}
		for (j = 1; j <= s; j++)
		{
			printf( "*");
		}
		s += 2;
		printf( "\n");
	}
	system("pause");
	return 0;
}