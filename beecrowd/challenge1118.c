#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char buffer[4096];
	float current;
	float total = 0;
	int valid_notes = 0;
	int option = -1;

	do
	{
		if (fgets(buffer, sizeof(buffer), stdin) == NULL)
			continue;

		if (sscanf(buffer, "%f", &current) == 0)
			continue;

		if (current < 0 || current > 10)
		{
			printf("nota invalida\n");

			continue;
		}

		total += current;
		valid_notes++;

		if (valid_notes == 2)
		{
			printf("media = %0.2f\n", total / 2.0f);

			do
			{
				printf("novo calculo (1-sim 2-nao)\n");

				if (fgets(buffer, sizeof(buffer), stdin) == NULL)
					continue;

				if (sscanf(buffer, "%d", &option) == 0)
					continue;

			} while (option != 1 && option != 2);

			total = 0;
			valid_notes = 0;
		}

	} while (option != 2);

	return 0;
}
