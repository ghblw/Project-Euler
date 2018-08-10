#include<stdio.h>
#define MAXN 10000000
int fac[10]={1,1};
bool check(int x)
{
    int a=x,b=0;
    while(a)
    {
        b+=fac[a%10];
        a/=10;
    }
    return x==b;
}
int main()
{
    for(int i=2;i<=9;i++){
        fac[i]=i*fac[i-1];
    }
    long long ans=0;
    for(int i=3;i<=MAXN;i++){
        if(check(i)) ans+=i;
    }
    printf("%lld\n",ans);
    return 0;
}
