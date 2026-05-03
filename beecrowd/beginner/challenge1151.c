#include <stdio.h>

#define ERROR -1
#define F1 0
#define F2 1

int fib(int n, int curr, int f1, int f2);

int main()
{
	int n;

	if (scanf("%d", &n) == ERROR || n <= 0 || n >= 46)
		return ERROR;

	printf("%d %d ", F1, F2);

	fib(n, 0, F1, F2);

	printf("\n");

	return 0;
}

int fib(int n, int curr, int f1, int f2)
{
	if (n == 1)
	{
		printf("%d", f1);

		return f1;
	}

	if (n == 2)
	{
		printf("%d", f2);

		return f2;
	}

	int f = f1 + f2;

	printf("%d", f);

	if (curr == n - 3)
		return f;

	printf(" ");

	return fib(n, ++curr, f2, f);
}
