#include <stdio.h>
#include <string.h>
#define maxn 1010

int a[maxn];
int 
main(void)
{
    int n,k = 1;
    memset(a,0,sizeof(a));
    scanf("%d%d",&n,&k);
    for(int i = 1;i <= k;i++)
    {
        for(int j = 1;j <= n;j++)
        {
            if(j % i == 0)
            {
                a[j] = !a[j];
            }
            else
            {
                a[j] = a[j];
            }
        }
    }
    for(int i = 0;i <= n;i++)
    {
        if(a[i])
        {
            printf("%d",i);
        }
    }
    return 0;
}