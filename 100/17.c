#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, d, x1, x2;
    printf("请输入一元二次方程的三个值: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a != 0)
    {
        d = sqrt(b * b - 4 * a * c);
        x1 = (-b + d) / (2 * a);
        x2 = (-b - d) / (2 * a);
        if (x1 > x2)
        {
            printf("%.2lf %.2lf", x1, x2);
        }
        else
        {
            printf("%.2lf %.2lf", x2, x1);
        }
    }

    return 0;
}