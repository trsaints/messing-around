#include <stdio.h>
 
int main() {
    int A, B, C, D;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    if (B <= C 
        || (C + D <= A + B) 
        || (C < 0 || D < 0)
        || (A % 2 != 0))
    {
        printf("Valores nao aceitos\n");

        return 0;
    }

    printf("Valores aceitos\n");
 
    return 0;
}