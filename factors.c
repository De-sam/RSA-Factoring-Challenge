#include <stdio.h>
#include <stdlib.h>

int getFactors(int givenNumber)
{
	int factor1 = 0;
	int factor2 = 0;

	for (int number = 2; number < givenNumber; number++)
	{
		if (givenNumber % number == 0)
		{
			factor1 = givenNumber / number;
			factor2 = number;
			break;
		}
	}

	printf("%d=%d*%d\n", givenNumber, factor1, factor2);
	return (0);
}

int factorizeFromFile(const char *filename)
{
	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		printf("File '%s' not found.\n", filename);
		return (1);
	}

	char line[100];

	while (fgets(line, sizeof(line), file))
	{
		int number = atoi(line);

		getFactors(number);
	}

	fclose(file);
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: %s <filename>\n", argv[0]);
		return (1);
	}
	else
	{
		const char *filename = argv[1];

		return (factorizeFromFile(filename));
	}
}
