#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    scanf("%d",&k);
    switch (k % 10){
    case 1:
        puts("мы нашли ");
        printf("%d", k);
        puts("гриб в лесу");
        break;
    case 2:
        puts("мы нашли ");
        printf("%d", k);
        puts("гриба в лесу");
        break;
    case 3:
        puts("мы нашли ");
        printf("%d", k);
        puts("гриба в лесу");
        break;
    case 4:
        puts("мы нашли ");
        printf("%d", k);
        puts("гриба в лесу");
        break;
    default:
        puts("мы нашли ");
        printf("%d", k);
        puts("грибов в лесу");
        break;
    }
}
