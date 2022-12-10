#include <stdio.h>
int main()
{
    int n1, n2, i, gys;
    printf("请输入两个数: ");
    scanf("%d %d", &n1, &n2);
    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gys = i;
    }
    printf("%d\n", gys);

    return 0;
}