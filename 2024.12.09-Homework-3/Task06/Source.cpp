#include <iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;

    scanf_s("%d", &a);
    scanf_s("%d", &b);

    int temp_a = a;
    int temp_b = b;

    while (temp_b != 0)
    {
        int nod = temp_b;
        temp_b = temp_a % temp_b;
        temp_a = nod;
    }

    printf("%d", (a * b) / temp_a);

    return EXIT_SUCCESS;
}