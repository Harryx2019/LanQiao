#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20][6];
    int i,j,k,max,sum;
    int Max[5];

    FILE *fp;
    if((fp=fopen("team.txt","r"))==NULL)
    {
        printf("文件打开失败！\n");
        exit(0);
    }
    else
    {
        for(i=0;i<20;i++)
        {
            for(j=0;j<6;j++)
            {
                fscanf(fp,"%d",&a[i][j]);
            }
        }
    }
    for(i=0;i<20;i++)
    {
        max=0;
        for(j=1;j<6;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
                k=j;
            }
        }
        for(j=1;j<6;j++)
        {
            if(j!=k)
                a[i][j]=0;
        }
    }

    for(j=1;j<6;j++)
    {
        max=0;
        for(i=0;i<20;i++)
        {
            if(a[i][j]>max)
                max=a[i][j];
        }
        Max[j-1]=max;
    }
    sum=0;
    for(i=0;i<5;i++)
    {
        sum+=Max[i];
    }
    printf("%d\n",sum);
    return 0;
}
