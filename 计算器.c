#define    _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<time.h>
int main()
{
    int a, b, d;
    int c = 0;
    int num1, num2, num3, result;
    char s, ch;
    printf("请输入你想算10以内还是100以内的加减乘除运算（请输入10或100)");
    scanf("%d", &b);
    getchar();
    printf("请输入你想要的四则运算");
    scanf("%c", &s);
    srand((unsigned)time(NULL));
    for (c = 0; c < 10; ++c)
    {
        num1 = rand() % d;
        num2 = rand() % d;
        if (b == 10)
        {
            num1 = num1 % 11;
            num2 = num2 % 11;
            if (s == '+')
            {
                printf("%d+%d=/n");
                result == num1 + num2;
                scanf("%d", &a);
                if (a == result)
                    printf("你真棒/n");
                else
                    printf("看看哪里错了");
            }
            if (s == '-')
            {
                printf("%d-%d=/n");
                result == num1 - num2;
                scanf("%d", &a);
                if (a == result)
                    printf("你真棒/n");
                else
                    printf("看看哪里错了");
            }
            if (s == '*')
            {
                printf("%d*%d=/n");
                result == num1 * num2;
                scanf("%d", &a);
                if (a == result)
                    printf("你真棒/n");
                else
                    printf("看看哪里错了");
            }
        }
    }
    return 0;
}