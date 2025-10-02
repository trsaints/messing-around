#include <stdio.h>
#include <stdlib.h>

int *insertion_sort(int input[], size_t length);

int main()
{
    int input[] = {5, 2, 4, 6, 1, 3};
    size_t input_size = sizeof(input) / sizeof(input[0]);
    int *sorted_input = insertion_sort(input, input_size);

    printf("Original array: [");

    for (int i = 0; i < input_size; i++)
    {
        printf("%d ", input[i]);
    }

    printf("]\n");

    printf("Sorted array: [");

    for (int i = 0; i < input_size; i++)
    {
        printf("%d ", sorted_input[i]);
    }

    printf("]\n");

    free(sorted_input);

    return 0;
}

int *insertion_sort(int input[], size_t length)
{
    int *result = (int *)calloc(length, sizeof(int));

    if (!result)
        return NULL;

    for (size_t i = 0; i < length; i++)
        result[i] = input[i];

    for (int j = 1; j < length; j++)
    {
        int key = result[j];
        int i = j - 1;

        while (i >= 0 && result[i] > key)
        {
            result[i + 1] = result[i];
            i--;
        }

        result[i + 1] = key;
    }

    return result;
}