#include <iostream>

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int d = 0;

	scanf_s("%d", &d);

	for (int i = 0; i < d; ++i)
	{
		scanf_s("%d", &n);
		scanf_s("%d", &m);
		printf("%d\n", 19 * m + (n + 239) * (n + 366) / 2);
	}

	return EXIT_SUCCESS;
}