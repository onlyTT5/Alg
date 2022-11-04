#include <stdio.h>
void func (int i, int j)
{
    if (i > j)
        return;
    printf("%d * %d = %d\t", i, j, i * j);
    func(i + 1, j);
}

void f(int n)
{
    if (n == 1)
        printf("1 * 1 = 1\n");
    else
    {
        f(n - 1);
        func (1, n);
        putchar('\n');
    }
}

int main()
{
    f(9);
    return 0;
}