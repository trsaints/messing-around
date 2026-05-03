#include <stdio.h>

#define ERROR -1

int fat(int n, int curr);

int main()
{
	int n;

	if (scanf("%d", &n) == ERROR || n <= 0 || n >= 13)
		return ERROR;

	printf("%d\n", fat(n, n - 1));

	return 0;
}

int fat(int n, int curr)
{
	if (curr < 1)
		return n;

	return n * fat(n - 1, curr - 1);
}
