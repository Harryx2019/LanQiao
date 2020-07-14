#include <stdio.h>

int main()
{
    int i,j,n,flag;
    long long sum=0;
    for(i=1;i<=2019;i++)
    {
        flag=0;
        n=i;
        while(n!=0)
        {
            j=n%10;
            if(j==2||j==0||j==1||j==9)
            {
                flag=1;
                break;
            }
            n=n/10;
        }
        if(flag==1)
            sum+=i;
    }
    printf("%lld\n",sum);
    return 0;
}
