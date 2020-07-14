#include <stdio.h>

int main()
{
    int K,L,i,j,x;
	long long sum = 0,dp[500][105];
	scanf("%d%d",&K,&L);
	for (j = 0; j < K; ++j)   //第1行初始化为1，便于下面for循环i=2时的计算
		dp[1][j] = 1;
	for (i = 2; i <= L; ++i)
		for (j = 0; j < K; ++j)
			for (x = 0; x < K; ++x)
				if (x != j-1 && x!= j+1)  //左右不相邻
				{
					dp[i][j] += dp[i-1][x]; //循环累加上一行for(..x..)
					dp[i][j] %= 1000000007;
				}
	for (j = 1; j < K; ++j)   //将最后一行累加，第一列0，不统计
	{
		sum += dp[L][j];
		sum %= 1000000007;
	}
	printf("%lld\n",sum);
	return 0;
}
