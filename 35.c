/*************************************************************************
	> File Name: 35.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 16时27分06秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAXN 1000000
int is_prime[MAXN+5]={0};
int primes[MAXN]={0};
bool check(int x)
{
    int digit=floor(log10(x))+1;
    int res=x;
    for(int i=0;i<digit;i++){
        res=res/10+(res%10)*(int)(pow(10,digit-1));
        if(is_prime[res]) return 0;
    }   
    return 1;
}
int main()
{
    for(int i=2;i<=MAXN;i++){
        if(!is_prime[i]) primes[++primes[0]]=i;
        for(int j=1;j<=primes[0];j++){
            if(i*primes[j]>MAXN) break;
            is_prime[i*primes[j]]=1;
            if(i%primes[j]==0) break;
        }
    }
    int cnt=0;
    for(int i=1;i<=primes[0];i++){
        if(check(primes[i])){
            cnt++;
        }
    }
    printf("%d\n",cnt);
}
