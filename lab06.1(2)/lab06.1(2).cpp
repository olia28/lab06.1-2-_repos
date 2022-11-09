#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

void Create(int a[], int size, int i = 0)
{
    if (i < size)
    {
        a[i] = 15 + rand() % 85;

        Create(a, size, ++i);
    }

    else return;
}

void Modify(int a[], int size, int i = 0)
{
    if (i < size)
    {
        if (a[i] % 2 != 0 && i % 13 != 0)
            a[i] = 0;

        Modify(a, size, ++i);
    }

    else return;
}
int Count(int a[], int size, int i = 0, int count = 0)
{
    if (i < size)
    {
        if (a[i] % 2 != 0 && i % 13 != 0)
            count++;

        Count(a, size, ++i, count);
    }

    else return count;
}

void Print(int a[], int size, int i = 0)
{
    if (i < size)
    {
        printf("%s%i%s%s", (i == 0 ? "{ " : ""), a[i], (i < size - 1 ? ", " : ""), (i == size - 1 ? " }\n" : ""));

        Print(a, size, ++i);
    }

    else return;
}

int Sum(int a[], int size, int i = 0, int sum = 0)
{
    if (i < size)
    {
        if (a[i] % 2 != 0 && i % 13 != 0)
            sum += a[i];

        return Sum(a, size, i + 1, sum);
    }

    else return sum;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(NULL));

    const int SIZE = 21;

    int c[SIZE];

    printf("Array before modification:\n");

    Create(c, SIZE);

    Print(c, SIZE);

    printf("Count: %i\nSum: %i\nArray after modification:\n", Count(c, SIZE), Sum(c, SIZE));

    Modify(c, SIZE);

    Print(c, SIZE);

    return 0;
}