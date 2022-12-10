#include <stdio.h>
int addNumbers(int n);
int main()
{
    int num;
    printf("请输入一个整型: ");
    scanf("%d", &num);
    printf("%d", addNumbers(num));
}

int addNumbers(int n)
{
    if (n != 0)
        return n + addNumbers(n - 1);
    else
        return n;
}