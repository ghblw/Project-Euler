/*************************************************************************
	> File Name: 7.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 15时35分57秒
 ************************************************************************/

#include<stdio.h>
#define MAXN 300000
int prime[MAXN+5];
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
    printf("%d\n",prime[10001]);
}
