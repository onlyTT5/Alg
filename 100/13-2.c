#include <stdio.h>
int main()
{
    int a;
    printf("请输入一个数判断它的奇偶性: ");
    scanf("%d", &a);
    if (a & 1)
    {
        printf("奇数\n");
    }
    else
    {
        printf("偶数\n");
    }

    return 0;
}