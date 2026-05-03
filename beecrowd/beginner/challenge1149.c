#include <stdio.h>

#define ERROR -1

int main()
{
	int a, n;

	if (scanf("%d %d", &a, &n) == -1)
		return ERROR;

	while (n <= 0)
	{
		if (scanf("%d", &n) == -1)
			return ERROR;
	}

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += (i + a);
	}

	printf("%d\n", sum);

	return 0;
}