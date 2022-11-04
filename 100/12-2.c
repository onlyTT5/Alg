#include <stdio.h>
int main()
{
    int a, b;
    printf("请输入两个数使他们交换: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d %d", a, b);

    return 0;
}