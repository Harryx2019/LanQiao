#include <stdio.h>

int main()
{
    int n,sum,i,j,k,flag;
    scanf("%d",&n);
    sum=0;
    for(i=1; i<=n; i++)
    {
        flag=0;
        k=i;
        while(k!=0)
        {
            j=k%10;
            if(j==2 || j==0 || j==1 || j==9)
            {
                flag=1;
                break;
            }
            k=k/10;
        }
        if(flag==1)
            sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
