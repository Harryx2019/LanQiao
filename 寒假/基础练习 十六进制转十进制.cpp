#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,n;
    int len;        //计算SUM长度
    char SUM[1000000];       //存储结果
    double index;   //16的多少次幂
    long long sum;  //结果
    int s_n;        //计算十六进制数组长度
    double sixteen_1[100000];//将输入的字符串数组转换成实数存入其中
    char sixteen[100000];    //输入的字符串数组

    scanf("%d",&n);
    while(n!=0)
    {
        len=0;
        index=0;
        sum = 0;
        s_n=0;

        scanf("%s",sixteen);
        for(i = 0; i < 8; i++)
        {
            switch(sixteen[i])
            {
                case '0':
                    sixteen_1[s_n++] = 0;
                    break;
                case '1':
                    sixteen_1[s_n++] = 1;
                    break;
                case '2':
                    sixteen_1[s_n++] = 2;
                    break;
                case '3':
                    sixteen_1[s_n++] = 3;
                    break;
                case '4':
                    sixteen_1[s_n++] = 4;
                    break;
                case '5':
                    sixteen_1[s_n++] = 5;
                    break;
                case '6':
                    sixteen_1[s_n++] = 6;
                    break;
                case '7':
                    sixteen_1[s_n++] = 7;
                    break;
                case '8':
                    sixteen_1[s_n++] = 8;
                    break;
                case '9':
                    sixteen_1[s_n++] = 9;
                    break;
                case 'A':
                    sixteen_1[s_n++] = 10;
                    break;
                case 'B':
                    sixteen_1[s_n++] = 11;
                    break;
                case 'C':
                    sixteen_1[s_n++] = 12;
                    break;
                case 'D':
                    sixteen_1[s_n++] = 13;
                    break;
                case 'E':
                    sixteen_1[s_n++] = 14;
                    break;
                case 'F':
                    sixteen_1[s_n++] = 15;
                    break;
                }
            }
        index = (double)s_n;
        for(i = 0; i < s_n; i++)
        {
            sum += sixteen_1[i] * pow(16,index - 1);
            index--;
        }
        if(sum == 0)
        {
            SUM[len++] = '0';
        }
        else
        {
            for(; sum > 0; )
            {
                SUM[len++] = sum % 8 + '0';
                sum /= 8;
            }
        }
        for(i = len - 1; i >= 0; i--)
        {
            printf("%c",SUM[i]);
        }
        printf("\n");
        n--;
    }
    return 0;
}
