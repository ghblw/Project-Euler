/*************************************************************************
	> File Name: 31.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 14时03分50秒
 ************************************************************************/

#include<stdio.h>
int w[10]={1,2,5,10,20,50,100,200};
int dp[10][300]={0};
int main()
{
    for(int i=0;i<8;i++){
        dp[i][0]=1;
        for(int j=0;j<=200;j++){
            if(i>=1) dp[i][j]=dp[i-1][j];
            if(j>=w[i]) dp[i][j]+=dp[i][j-w[i]];
        }
    }
    printf("%d\n",dp[7][200]);
    return 0;
}