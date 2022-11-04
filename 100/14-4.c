#include <stdio.h>
int main()
{
    int start, end, divisor; // 除数
    printf("开始的数");
    scanf("%d", &start);
    printf("结束的数");
    scanf("%d", &end);
    printf("除数");
    scanf("%d", &divisor);
    
    for (int i = start; i <= end; i++)
    {
        if (i % divisor == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}