#include<stdio.h>

#include<math.h>

#include<stdlib.h>

int right = 0;

int wrong = 0;

void add()

{
    int a, b, c;
    int max;
    printf("����������������\n\t\t");
    scanf_s("%d", &max);

    a = rand() % max;

    b = rand() % max;

    printf("��ش�\n\t\t %d + %d = ", a, b);

    scanf_s("%d", &c);

    if (a + b == c)

    {
        printf("�ش���ȷ!\n");

        right++;

    }

    else

    {
        printf("�ش����!\n");

        wrong++;

    }

}

void minu()

{
    int a, b, c;
    int max;
    printf("����������������\n\t\t");
    scanf_s("%d", &max);

    a = rand() % max;

    b = rand() % max;

    printf("��ش�\n\t\t %d - %d = ", a, b);

    scanf_s("%d", &c);

    if (a - b == c)

    {
        printf("�ش���ȷ!\n");

        right++;

    }

    else

    {
        printf("�ش����!\n");

        wrong++;

    }

}

void mul()

{
    int a, b, c;
    int max;
    printf("����������������\n\t\t");
    scanf_s("%d", &max);

    a = rand() % max;

    b = rand() % max;

    printf("��ش�\n\t\t %d * %d = ", a, b);

    scanf_s("%d", &c);

    if (a * b == c)

    {
        printf("�ش���ȷ!\n");

        right++;

    }

    else

    {
        printf("�ش����!\n");

        wrong++;

    }

}

void di()

{
    int a, b, c;
    int max;
    printf("����������������\n\t\t");
    scanf_s("%d", &max);

    a = rand() % max;

    b = rand() % max;

    printf("��ش�\n\t\t %d / %d = ", a, b);

    scanf_s("%d", &c);

    if (a / b == c)

    {
        printf("�ش���ȷ!\n");

        right++;

    }

    else

    {
        printf("�ش����!\n");

        wrong++;

    }

}


void main()

{
    int choise;

    int con = 0;

    printf("\n\t\t\t��ӭ����Сѧ������������\n\n");

    while (1)

    {
        printf("��ѡ��\n");

        printf("\t\t\t  �ӷ�����(������1)\n");

        printf("\t\t\t  ��������(������2)\n");

        printf("\t\t\t  �˷�����(������3)\n");

        printf("\t\t\t  ��������(������4)\n");

        printf("\t\t\t  �˳�����(������5)\n");

        if (con == 0)

            scanf_s("%d", &choise);
        int m;
        printf("������������Ŀ������\n\t\t");
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

        printf("\n\t\t\t�������㣿(������1)\n");

        printf("\n\t\t\t����ѡ��(������2)\n");

        printf("\n\t\t\t�˳����㣿(������3)\n");

        scanf_s("%d", &con);

        if (con == 1)

            con = 1;

        else if (con == 2)

            con = 0;

        else if (con == 3)

            break;

        else

            printf("��Ǹ!���������ָ������!����������!\n");

    }

    printf("���ܹ������ %d ����\n��ȷ %d ��\n���� %d ��\n", right + wrong, right, wrong);
}