#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int r = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n * n; ++i)
	{
		int temp_r = 0;
		scanf("%d", &temp_r);

		r += temp_r;
	}

	printf("%d", r / 2);

	return EXIT_SUCCESS;
}