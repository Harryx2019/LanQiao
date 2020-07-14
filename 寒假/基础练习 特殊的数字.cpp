#include <stdio.h>

int main()
{
    int i,j,k,m,n,p,a;
    scanf("%d",&a);

    for(i=1;i<=9;i++)
    {
        for(j=0;j<=9;j++)
        {
            for(k=0;k<=9;k++)
            {
                for(m=0;m<=9;m++)
                {
                    for(n=0;n<=9;n++)
                    {
                        if(i*10000+j*1000+k*100+m*10+n*1 == n*10000+m*1000+k*100+j*10+i && i+j+k+m+n == a)
                            printf("%d%d%d%d%d\n",i,j,k,m,n);
                    }
                }
            }
        }
    }

    for(i=1;i<=9;i++)
    {
        for(j=0;j<=9;j++)
        {
            for(k=0;k<=9;k++)
            {
                for(m=0;m<=9;m++)
                {
                    for(n=0;n<=9;n++)
                    {
                        for(p=0;p<=9;p++)
                        {
                            if(i*100000+j*10000+k*1000+m*100+n*10+p == p*100000+n*10000+m*1000+k*100+j*10+i && i+j+k+m+n+p == a)
                                printf("%d%d%d%d%d%d\n",i,j,k,m,n,p);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
