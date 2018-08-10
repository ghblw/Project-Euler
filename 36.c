/*************************************************************************
	> File Name: 36.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 15时24分38秒
 ************************************************************************/

#include<stdio.h>
#define MAXN 1000000
bool check(int x,int k)
{
    int a=x,b=0;
    while(a)
    {
        b=b*k+a%k;
        a/=k;
    }
    return b==x;
}
int main()
{
    int ans=0;
    for(int i=1;i<=MAXN;i++){
        if(check(i,10)&&check(i,2)) ans+=i;
    }
    printf("%d\n",ans);
}
