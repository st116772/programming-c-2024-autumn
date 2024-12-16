#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int m = 0;

    scanf_s("%d", &n);
    scanf_s("%d", &m);

    int temp_n = n;
    int temp_m = m;

    while (temp_m != 0)
    {
        int nod = temp_m;
        temp_m = temp_n % temp_m;
        temp_n = nod;
    }

    if (m % n == 0)
    {
        printf("1");
    }
    else
    {
        printf("%d", n / temp_n);
    }

    return EXIT_SUCCESS;
}