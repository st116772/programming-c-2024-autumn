#include <iostream>

int main(int argc, char* argv[])
{
	int coins = 0;
	int flipped = 0;

	scanf_s("%d", &coins);

	for (int i = 0; i < coins; ++i)
	{
		int isFlipped = 0;
		scanf_s("%d", &isFlipped);
		flipped += isFlipped;
	}

	if (flipped <= coins / 2)
	{
		printf("%d", flipped);
	}
	else
	{
		printf("%d", coins - flipped);
	}

	return EXIT_SUCCESS;
}