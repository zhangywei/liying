#include<stdio.h>

#include<math.h>

#include<stdlib.h>

int right = 0;

int wrong = 0;

void add()

{
    int a, b, c;
    int max;
    printf("请输入计算最大数：\n\t\t");
    scanf_s("%d", &max);

    a = rand() % max;

    b = rand() % max;

    printf("请回答：\n\t\t %d + %d = ", a, b);

    scanf_s("%d", &c);

    if (a + b == c)

    {
        printf("回答正确!\n");

        right++;

    }

    else

    {
        printf("回答错误!\n");

        wrong++;

    }

}

void minu()

{
    int a, b, c;
    int max;
    printf("请输入计算最大数：\n\t\t");
    scanf_s("%d", &max);

    a = rand() % max;

    b = rand() % max;

    printf("请回答：\n\t\t %d - %d = ", a, b);

    scanf_s("%d", &c);

    if (a - b == c)

    {
        printf("回答正确!\n");

        right++;

    }

    else

    {
        printf("回答错误!\n");

        wrong++;

    }

}

void mul()

{
    int a, b, c;
    int max;
    printf("请输入计算最大数：\n\t\t");
    scanf_s("%d", &max);

    a = rand() % max;

    b = rand() % max;

    printf("请回答：\n\t\t %d * %d = ", a, b);

    scanf_s("%d", &c);

    if (a * b == c)

    {
        printf("回答正确!\n");

        right++;

    }

    else

    {
        printf("回答错误!\n");

        wrong++;

    }

}

void di()

{
    int a, b, c;
    int max;
    printf("请输入计算最大数：\n\t\t");
    scanf_s("%d", &max);

    a = rand() % max;

    b = rand() % max;

    printf("请回答：\n\t\t %d / %d = ", a, b);

    scanf_s("%d", &c);

    if (a / b == c)

    {
        printf("回答正确!\n");

        right++;

    }

    else

    {
        printf("回答错误!\n");

        wrong++;

    }

}


void main()

{
    int choise;

    int con = 0;

    printf("\n\t\t\t欢迎进入小学简易四则运算\n\n");

    while (1)

    {
        printf("请选择：\n");

        printf("\t\t\t  加法运算(请输入1)\n");

        printf("\t\t\t  减法运算(请输入2)\n");

        printf("\t\t\t  乘法运算(请输入3)\n");

        printf("\t\t\t  除法运算(请输入4)\n");

        printf("\t\t\t  退出运算(请输入5)\n");

        if (con == 0)

            scanf_s("%d", &choise);
        int m;
        printf("请输入生成题目个数：\n\t\t");
        scanf_s("%d", &m);
        while (m > 0) {
            switch (choise)

            {
            case 1:

                add();

                break;

            case 2:

                minu();

                break;

            case 3:

                mul();

                break;

            case 4:

                di();

                break;

            case 5:

                return;

            }
            m--;
        }

        printf("\n\t\t\t继续运算？(请输入1)\n");

        printf("\n\t\t\t重新选择？(请输入2)\n");

        printf("\n\t\t\t退出运算？(请输入3)\n");

        scanf_s("%d", &con);

        if (con == 1)

            con = 1;

        else if (con == 2)

            con = 0;

        else if (con == 3)

            break;

        else

            printf("抱歉!，你输入的指令有误!请重新输入!\n");

    }

    printf("您总共完成了 %d 道题\n正确 %d 道\n错误 %d 道\n", right + wrong, right, wrong);
}