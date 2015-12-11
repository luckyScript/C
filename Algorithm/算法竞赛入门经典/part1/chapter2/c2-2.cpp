//
//  chapter2.cpp
//  
//
//  Created by Kay on 12/11/15.
//
//

#include <stdio.h>
#include <math.h>
int
main(void)
{
    for(int a = 1;a <= 9;a++)
    {
        for(int b = 0;b <= 9;b++)
        {
            int n = a*1100 + b*11;
            int m = floor(sqrt(n)+0.5);
            if(m == sqrt(n))
            {
                printf("%d",n);
            }
            else{}
        }
    }
}