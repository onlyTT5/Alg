#include <stdio.h>
int main()
{
    int sum;
    printf("请输入一个自然数: ");
    while (scanf("%d", &sum))
    {
        printf("%d", (sum + 1) * sum / 2);
        break;
    }
    return 0;
}