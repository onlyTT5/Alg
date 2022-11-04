#include <stdio.h>
int main()
{
    for (int i = 1; i < 10; i++)
    {
        i & 1 ? printf("奇数: %d\n", i) : printf("偶数: %d\n", i);
    }

    return 0;
}