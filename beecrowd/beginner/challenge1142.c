#include <stdio.h>

int main()
{
	int line_count;

	scanf("%d", &line_count);

	if (line_count <= 0)
		return -1;

	for (int line = 0, x = 1; line < line_count; line++, x += 4)
	{
		printf("%d %d %d PUM\n", x, x + 1, x + 2);
	}

	return 0;
}