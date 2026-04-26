#include <stdio.h>
#include <stdbool.h>

enum FuelType
{
	Alcohol = 1,
	Gasoline = 2,
	Diesel = 3,
	None = 4
};

int main()
{
	unsigned int selected_fuel;

	int alcohol_count = 0, gasoline_count = 0, diesel_count = 0;

		while (true)
	{
		scanf("%d", &selected_fuel);

		if (selected_fuel == None)
		{
			printf("MUITO OBRIGADO\n");
			printf("Alcool: %d\n", alcohol_count);
			printf("Gasolina: %d\n", gasoline_count);
			printf("Diesel: %d\n", diesel_count);

			break;
		}

		switch (selected_fuel)
		{
		case Alcohol:
			alcohol_count++;

			break;

		case Gasoline:
			gasoline_count++;

			break;

		case Diesel:
			diesel_count++;

			break;
		}
	}

	return 0;
}