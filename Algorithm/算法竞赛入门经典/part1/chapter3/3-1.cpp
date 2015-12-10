#include <stdio.h>
#define MAXN 5
int array[MAXN];
int
main()
{
    int x,n = 0;
    while(scanf("%d",&x) == 1)
    {
        array[n++] = x;
    }
    
    for(int i = n-1;i >= 1;i--)
    {
        printf("%d",array[n]);
    }
    return 0;
}
