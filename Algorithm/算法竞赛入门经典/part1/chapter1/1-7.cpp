#include <stdio.h>
int
main(void)
{
    int year;
    scanf("%d",&year);
    (year%4==0&&year%100!=0)||year%400==0 ? printf("yes"):printf("no");
    return 0;
}