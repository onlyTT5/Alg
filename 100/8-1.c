#include <stdio.h>
#define MAX_STRING_LENGTH 65535
int main()
{
    char s[MAX_STRING_LENGTH];
    printf("请输入小于 %d 的字符: ", MAX_STRING_LENGTH);
    scanf("%s", s);
    for (int i = 0; s[i]; i++)
    {
        printf("%c = %d\t", s[i], s[i]);
    }

    return 0;
}