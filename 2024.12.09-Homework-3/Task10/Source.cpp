#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int t = 0;

	scanf_s("%d", &n);

	int streak = 0;
	int longest = 0;

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &t);

		if (t > 0)
		{
			streak++;
		}
		else
		{
			streak = 0;
		}

		if (streak > longest)
		{
			longest = streak;
		}
	}

	printf("%d", longest);

	return EXIT_SUCCESS;
}