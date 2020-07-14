#include <stdio.h>

int main()
{
    int i,j,k,flag,n,a[3],p,num=0;
    for(i=1;i<2019;i++)
    {
        for(j=i+1;j<2019-i;j++)
        {
            for(k=j+1;k<=2019-i-j;k++)
            {
                if(i+j+k==2019)
                {
                    flag=1;
                    a[0]=i;
                    a[1]=j;
                    a[2]=k;
                    for(p=0;p<3;p++)
                    {
                        n=a[p];
                        while(n!=0)
                        {
                            if(n%10==2 || n%10==4)
                            {
                                flag=0;
                                break;
                            }
                            n=n/10;
                        }
                    }
                    if(flag==1)
                    {
                        num++;
                        //printf("%d %d %d\n",i,j,k);
                    }
                }
            }
        }
    }
    printf("%d\n",num);
    return 0;
}
