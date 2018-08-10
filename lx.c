/*************************************************************************
	> File Name: lx.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月02日 星期四 15时42分54秒
 ************************************************************************/
 #include<stdio.h>
 #define MAXN 1000000
 #define MAXR 4000000
 int vis[MAXR+5]={0};
 int cal(long long x)
 {
     int ans;
     if(x<=MAXR&&vis[x]) return vis[x];
     if(x==1) return 1;
     if(x&1) ans=cal(3*x+1)+1;
     else ans=cal(x/2)+1;
     if(x<=MAXR) vis[x]=ans;
     return ans;
 }
 int main()
 {
     int maxn=0,maxi;
     for(int i=1;i<=MAXN;i++){
         int tmp=cal(i);
         if(tmp>maxn){
             maxn=tmp;
             maxi=i;
         }
     }
     printf("%d\n",maxi);
 }
