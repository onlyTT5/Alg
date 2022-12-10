#include <stdio.h>
void f(int n);
void func(int i, int j);
int main()
{
    f(9);
    return 0;
}

void f(int n)
{
    if (n == 1)
        printf("1 * 1 = 1\n");
    else
    {
        f(n - 1);
        func(1, n);
        putchar('\n');
    }
}

void func(int i, int j)
{
    if (i > j)
        return;
    else
    {
        printf("%d * %d = %d\t", i, j, i * j);
        func(i + 1, j);
    }
}