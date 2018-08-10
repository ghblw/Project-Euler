/*************************************************************************
	> File Name: 10.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 16时02分22秒
 ************************************************************************/

#include<stdio.h>
#define MAXN 2000000
int prime[MAXN+5]={0};
int main()
{
    for(int i=2;i<=MAXN;i++){
        if(!prime[i]) prime[++prime[0]]=i;
        for(int j=1;j<=prime[0];j++){
            if(i*prime[j]>MAXN) break;
            prime[i*prime[j]]=1;
            if(i%prime[j]==0) break;
        }
    }
    long long ans=0;
    for(int i=1;i<=prime[0];i++){
        ans+=prime[i];
    }
    printf("%lld\n",ans);
    return 0;
}
