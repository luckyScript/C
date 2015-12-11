#include <stdio.h>
#include <time.h>

int
main(void)
{
    const int MOD = 1000000;
    long long int num,sum;
    scanf("%lld",&num);
    sum = 0;
    for(int i = 1;i <= num;i++)
    {
        long long int factorial = 1;
        for(int j = 1;j <= i;j++)
        {
            factorial = (factorial * j);
        }
        sum = (factorial + sum);
    }
    printf("%lld\n",sum);
    printf("Time used = %.2f\n",(double)clock()/CLOCKS_PER_SEC);
    return 0;
}
