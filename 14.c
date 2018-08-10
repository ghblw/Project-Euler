/*************************************************************************
	> File Name: 14.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 17时16分07秒
 ************************************************************************/

#include<stdio.h>
#define MAXN 1000000
#define MAX_RANGE 5000000
int vis[MAX_RANGE]={0};
int cal(long long x)
{
    int ans;
    if(x==1) return 1;
    if(x<=MAX_RANGE&&vis[x]) return vis[x];
    if(x&1) ans=cal(3*x+1)+1;
    else ans=cal(x/2)+1;
    if(x<=MAX_RANGE) vis[x]=ans;
    return ans;
}
int main()
{
    int ans=0,pos;
    for(int i=1;i<=MAXN;i++){
        int tmp=cal(i);
        if(tmp>ans){
            pos=i;
            ans=tmp;
        }
    }
    printf("%d\n",pos);
}
