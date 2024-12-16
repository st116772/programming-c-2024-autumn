#include <iostream>

int main(int argc, char* argv[])
{
	long long a = 0;
	long long b = 0;
	long long c = 0;
	long long d = 0;

	scanf_s("%lld", &a);
	scanf_s("%lld", &b);
	scanf_s("%lld", &c);
	scanf_s("%lld", &d);

	for (int i = -100; i <= 100; ++i)
	{
		if ((a * i * i * i + b * i * i + c * i + d) == 0)
		{
			printf("%d ", i);
		}
	}

	return EXIT_SUCCESS;
}