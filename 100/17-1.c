#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, d, x1, x2;
    char ch;
    do
    {
        printf("请输入一元二次方程的三个系数：");
        scanf("%lf %lf %lf", &a, &b, &c);
        d = sqrt(b * b - 4 * a * c);
        if (d > 0)
        {
            x1 = (-b + d) / (2 * a);
            x2 = (-b - d) / (2 * a);
            printf("该一元二次方程有两个实数: %lf %lf", x1, x2);
        }
        else if (d == 0)
        {
            x1 = (-b + d) / (2 * a);
            x2 = (-b - d) / (2 * a);
            printf("该一元二次方程有两个相等的实数: %lf %lf", x1, x2);
        }
        else 
        {
            printf("该一元二次方程无实数解");
        }
        printf("请问是否继续？Y / N");
        scanf("%c", &ch);
    }
    while (ch == 'Y' || ch == 'y');

    return 0;
}