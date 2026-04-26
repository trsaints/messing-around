#include <stdio.h>

int main()
{
	int x, y;

	scanf("%d %d", &x, &y);

	if (y < x)
	{
		int temp = x;
		x = y;
		y = temp;
	}

	int sum = 0;

	for (int i = x; i <= y; i++)
	{
		if (i % 13 != 0)
			sum += i;
	}

	printf("%d\n", sum);

	return 0;
}