#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	printf("number\tsquart\tcube\n");
	for (i = 0; i <= 10; i++)
	{
		printf("%d", i);
		printf("\t");
		printf("%d", i*i);
		printf("\t");
		printf("%d", i*i*i);
		printf("\n");
	}
	system("pause");
	return 0;
}