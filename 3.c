/*************************************************************************
	> File Name: 3.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时17分31秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    long long i=2,ans;
    while(i*i<=n)
    {
        if(n%i==0) ans=i;
        while(n%i==0){
            n/=i;
        }
        i++;
    }
    if(n>1) ans=n;
    printf("%lld\n",ans);
}
