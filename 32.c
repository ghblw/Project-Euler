/*************************************************************************
	> File Name: 32.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 15时21分14秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAXN 10000
int vis[MAXN*MAXN+5]={0};
int digit(int x)
{
    return floor(log10(x))+1;
}
bool cal(int x,int *num)
{
    while(x)
    {
        if(x%10==0) return 0;
        if(num[x%10]) return 0;
        num[x%10]=1;
        x/=10;
    }
    return 1;
}
bool check(int i,int j)
{
    int num[10]={0};
    if((digit(i)+digit(j)+digit(i*j))!=9) return 0;
    if(cal(i,num)&&cal(j,num)&&cal(i*j,num))return 1;
    return 0;
}
int main()
{
    long long ans=0;
    for(int i=1;digit(i)+digit(j)+digit(i*j)<=9;i++){
        for(int j=1;digit(j)*2+digit(j*j)<=9;j++){
            int tmp=i*j;
            if(check(i,j)&&(!vis[tmp])){
                vis[tmp]=1;
                ans+=tmp;
            }
        }
    }
    printf("%lld\n",ans);
    return 0;
}
