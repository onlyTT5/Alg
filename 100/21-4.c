#include <stdio.h>
int main()
{
    int num;
    printf("请输入一个自然数：");
    while (scanf("%d", &num) == 1)
    {
        printf("Sum = %d", (num + 1) * num / 2);
        break;
    }
    return 0;
}