#include <iostream>
#include <cstdio>
using namespace std;

int c[100];
int main()
{
    int a=2019;
    int i=0,j;
    int temp=a;
    while(a)
    {
        temp=a%26;
        c[i++]=temp;
        a/=26;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%c",'A'+c[j]-1);
    }

    return 0;
}
