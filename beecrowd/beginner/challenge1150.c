#include <stdio.h>

#define ERROR -1

int main()
{
	int x, z;

	if (scanf("%d", &x) == ERROR)
		return ERROR;

	do
	{
		if (scanf("%d", &z) == ERROR)
			continue;

	} while (z <= x);

	int i, total;

	for (i = 0, total = x; total < z; total += (x + 1), i++)
	{
		continue;
	}

	printf("%d\n", i);

	return 0;
}