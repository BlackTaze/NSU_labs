#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    scanf("%d",&k);
    switch (k % 10){
    case 1:
        puts("�� ����� ");
        printf("%d", k);
        puts("���� � ����");
        break;
    case 2:
        puts("�� ����� ");
        printf("%d", k);
        puts("����� � ����");
        break;
    case 3:
        puts("�� ����� ");
        printf("%d", k);
        puts("����� � ����");
        break;
    case 4:
        puts("�� ����� ");
        printf("%d", k);
        puts("����� � ����");
        break;
    default:
        puts("�� ����� ");
        printf("%d", k);
        puts("������ � ����");
        break;
    }
}
