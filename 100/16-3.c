#include <stdio.h>
int getMax();
int main()
{
    int a, b, c;
    printf("请输入三个整数: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("最大的数是: %d\n", getMax(a, b, c));

    return 0;
}

int getMax(int a, int b, int c)
{
    int max = a;
    if (b > max)
    {
        max = b;
    }

    if (c > max)
    {
        max = c;
    }
    
    return max;
}