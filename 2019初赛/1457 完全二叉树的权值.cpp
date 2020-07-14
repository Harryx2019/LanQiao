#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n,h,i,*a,max,m;
    long long j,k,sum;
    scanf("%d",&n);
    a=(int*)malloc(sizeof(int)*n);
    h=log(n)/log(2)+1;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    m=1;
    for(i=2;i<=h;i++)
    {
        k=1;
        sum=0;
        for(j=0;j<i-1;j++)
            k=k*2;
        for(j=k-1;j<k*2-1 && j<n;j++)
            sum+=a[j];
        if(sum>max)
        {
            max=sum;
            m=i;
        }
    }
    printf("%d\n",m);
	return 0;
}
