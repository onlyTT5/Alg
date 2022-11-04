#include <stdio.h>
int main()
{   
    int num;
    printf("请输入一个整数: ");
    scanf("%d", &num);
    printf("%d\n", addNumbers(num));

    return 0;
}

int addNumbers(int n)
{
    if (n != 0)
        return n + addNumbers(n - 1);
    else
        return n;
}