/*************************************************************************
	> File Name: 2.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时11分22秒
 ************************************************************************/

#include<stdio.h>
#define MAXN 4000000
int main()
{
    int a=1,b=2,tmp=a+b;
    long long ans=0;
    while(a<=MAXN)
    {
        if(b%2==0) ans+=b;
        a=b;
        b=tmp;
        tmp=a+b;
    }
    printf("%lld\n",ans);
    return 0;
}
