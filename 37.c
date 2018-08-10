/*************************************************************************
	> File Name: 37.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 17时05分38秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAXN 10000000
int primes[MAXN+5]={0};
int is_prime[MAXN+5]={0,1};
bool check(int x)
{
    int a=x;
    while(x)
    {
        if(is_prime[x]) return 0;
        x/=10;
    }
    while(a)
    {
        if(is_prime[a]) return 0;
        int digit=floor(log10(a))+1;
        a=a%(int)pow(10,digit-1);
    }
    return 1;
}
int main()
{
    long long ans=0;
    for(int i=2;i<=MAXN;i++){
        if(!is_prime[i]) primes[++primes[0]]=i;
        for(int j=1;j<=primes[0];j++){
            if(i*primes[j]>MAXN) break;
            is_prime[i*primes[j]]=1;
            if(i%primes[j]==0) break;
        }
    }
    for(int i=1;i<=primes[0];i++){
        if(primes[i]<10) continue;
        if(check(primes[i])) ans+=primes[i]; 
    }
    printf("%lld\n",ans);
    return 0;
}
