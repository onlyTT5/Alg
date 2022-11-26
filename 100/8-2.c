#include <stdio.h>
#define MAX_ASCII 127
int main()
{
    char num, enter;
    int temp;
    for (; temp > 0;)
    {
        printf("----------------------------\n");
        printf("|**      开始            **|\n");
        printf("|**ASCII  转  字符  按:1 **|\n");
        printf("|**字符   转  ASCII 按:2 **|\n");
        printf("|**      结束       按:0 **|\n");
        printf("----------------------------\n");

        scanf("%d", &temp);
        if (temp == 1)
        {
            printf("请输入一个数字");
            scanf("%d", &num);
            printf("%d = %c\n", num, num);
        }

        if (temp == 2)
        {
            printf("输入一个字符: \n");
            scanf("%c", &enter);
            scanf("%c", &num);
            printf("%c = %d\n", num, num);
        }
    }
    return 0;
}