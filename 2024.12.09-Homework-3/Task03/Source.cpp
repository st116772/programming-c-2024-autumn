#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int h = 0;
	int w = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &h);
		if (h <= 437)
		{
			w = i + 1;
			printf("Crash %d", w);
			break;
		}
	}

	if (w == 0)
	{
		printf("No crash");
	}

	return EXIT_SUCCESS;
}