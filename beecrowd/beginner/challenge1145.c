#include <stdio.h>

int main() {
  int x, y;

  if (scanf("%d %d", &x, &y) == -1)
    return -1;

  if (x <= 1 || x >= 20 || x >= y || y >= 100000)
    return -1;

  for (int i = 1; i <= y; i++) {
    printf("%d", i);

    if (i % x == 0)
      printf("\n");
    else
      printf(" ");
  }

  return 0;
}