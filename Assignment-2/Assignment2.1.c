#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("1.dir\n");
    printf("2.cls\n");
    printf("3.cd\n");
    printf("4.date\n");
    printf("5.time\n");
    printf("6.ver\n");
    printf("7.echo\n");
    printf("8.color\n");
    printf("9.path\n");
    printf("10.exit\n");

    printf("enter choice:");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
            system("dir");
            break;
        case 2:
            system("cls");
            break;
        case 3:
            system("cd");
            break;
        case 4:
            system("date");
            break;
        case 5:
            system("time");
            break;
        case 6:
            system("ver");
            break;
        case 7:
            system("echo hello");
            break;
        case 8:
            system("color fc");
            break;
        case 9:
            system("path");
            break;
        case 10:
            exit(0);
            break;
        default:
            printf("invalid choice");
    }

    getchar();
    return 0;
}