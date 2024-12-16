#include <iostream>

int main(int argc, char* argv[])
{
    int i = 0;
    int j = 0;

    scanf_s("%d", &i);
    scanf_s("%d", &j);

    int temp_i = i;
    int temp_j = j;

    while (temp_j != 0)
    {
        int nod = temp_j;
        temp_j = temp_i % temp_j;
        temp_i = nod;
    }

    int a = 1;
    int b = 1;
    int c = 0;

    for (int i = 2; i < temp_i; ++i)
    {
        c = (a + b) % 1000000000;
        a = b;
        b = c;
    }
    printf("%d", b);

    return EXIT_SUCCESS;
}