/*************************************************************************
	> File Name: 46.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 13时11分57秒
 ************************************************************************/

#include<stdio.h>
#define MAXN 10000000 
int is_prime[MAXN+5]={1,1};
bool check(int x)
{
    int f=0;
    for(int i=1;2*i*i<x;i++){
        if(!is_prime[x-2*i*i]){
            f=1;
            break;
        }
    }
    return f;
}
int main()
{
    for(int i=2;i*i<=MAXN;i++){
        if(is_prime[i]) continue;
        for(int j=i*i;j<=MAXN;j+=i){
            is_prime[j]=1;
        }
    }
    int ans=0;
    for(int i=3;i<=MAXN;i+=2){
        if(!is_prime[i]) continue;
        if(!check(i)){
            ans=i;
            break;
        }
    }
    printf("%d\n",ans);
    return 0;
}
