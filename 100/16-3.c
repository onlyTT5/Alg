#include <stdio.h>
/*
    判断三个数中的最大数
*/
int getMax(int a, int b, int c)
{
    int max=a;
    if(b>max)
    {
        max = b;
    }
    if(c>max)
    {
        max = c;
    }
    return max;
}
 
 
int main()
{
    int a, b, c;
    printf("请输入三个整数，用空格分隔：");
    scanf("%d %d %d",&a, &b, &c);
    printf("最大值是：%d",getMax(a, b, c));
    return 0;
}