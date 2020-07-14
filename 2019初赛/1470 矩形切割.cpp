#include <stdio.h>

int main()
{
    int a=2019,b=324,sum=0;
    while(a!=b)
    {
        sum++;
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    printf("%d\n",sum+1);
    return 0;
}
