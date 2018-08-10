/*************************************************************************
	> File Name: 42.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 14时39分27秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include "42.h"
int cal(int n)
{
    return n*(n+1)/2;
}
bool check(int x)
{
    int head=0,tail=5000,mid;
    while(head<=tail)
    {
        mid=(head+tail)>>1;
        if(cal(mid)==x) return 1;
        if(cal(mid)>x) tail=mid-1;
        if(cal(mid)<x) head=mid+1;
    }
    return 0;
}
int main()
{
    int cnt=0;
    for(int i=0;str[i][0];i++){
        int tmp=0;
        for(int j=0;str[i][j];j++){
            tmp+=(str[i][j]-'A'+1);
        }
        if(check(tmp)){
            cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
