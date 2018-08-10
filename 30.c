/*************************************************************************
	> File Name: 30.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时45分05秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAXN 1000000
bool check(int x)
{
    long long ans=0;
    int a=x;
    while(a)
    {
        ans+=pow(a%10,5);
        a/=10;
    }
    return x==ans;
}
int main()
{
    long long ans=0;
    for(int i=2;i<=MAXN;i++){
        if(check(i)) ans+=i;
    }
    printf("%lld\n",ans);
    return 0;
}
