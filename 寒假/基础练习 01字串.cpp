#include <stdio.h>

int main()
{
    int i;
    for(i=0;i<32;i++)
    {
        printf("%d%d%d%d%d\n",i%32/16,i%16/8,i%8/4,i%4/2,i%2);
    }
    return 0;
}
