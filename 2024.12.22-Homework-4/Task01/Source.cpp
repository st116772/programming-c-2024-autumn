#include <iostream>

int main(int argc, char* argv[])
{
	int a[1000] = { 0 };
	int n = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	int x = 0;

	scanf_s("%d", &x);

	int k = 0;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] == x)
		{
			++k;
		}
	}

	printf("%d", k);

	return EXIT_SUCCESS;
}