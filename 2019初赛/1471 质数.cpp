#include <stdio.h>

int main()
{
    int i,j,sum=0,flag;
    for(i=2; sum<2019; i++)
    {
        flag=1;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            sum++;
    }
    printf("%d\n",i-1);
    return 0;
}
