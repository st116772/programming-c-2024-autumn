#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int v = 0;
	int s = 0;
	int w = -1;

	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		int temp_v = 0;
		scanf_s("%d", &temp_v);

		int temp_s = 0;
		scanf_s("%d", &temp_s);

		if (temp_s == 1 && temp_v > v)
		{
			v = temp_v;
			w = i + 1;
		}
	}

	printf("%d", w);

	return EXIT_SUCCESS;
}