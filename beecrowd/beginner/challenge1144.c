#include <stdio.h>

int main()
{
	int line_count;

	scanf("%d", &line_count);

	if (line_count <= 0 || line_count < 1 || line_count > 1000)
	{
		return -1;
	}

	for (int x = 1; x <= line_count; x++)
	{
		printf("%d %d %d\n", x, x * x, x * x * x);
		printf("%d %d %d\n", x, (x * x) + 1, (x * x * x) + 1);
	}

	return 0;
}