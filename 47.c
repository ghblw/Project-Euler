/*************************************************************************
	> File Name: 47.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 13时47分59秒
 ************************************************************************/

#include<stdio.h>
#define MAXN 1000000 
int prime[MAXN+5]={0};
int a[MAXN+5]={0};
int main()
{
    for(int i=2;i<=MAXN;i++){
        if(!prime[i]){
            a[i]=1;
            prime[++prime[0]]=i;
        }
        for(int j=1;j<=prime[0];j++){
            if(i*prime[j]>MAXN) break;
            prime[i*prime[j]]=1;
            if(i%prime[j]==0){
                a[i*prime[j]]=a[i];
                break;
            }
            else{
                a[i*prime[j]]=a[i]+1;
            }
        }
    }
    int ans=0,f=0;
    for(int i=2;i<=MAXN-3;i++){
        for(int j=0;j<=3;j++){
            if(a[i+j]!=4) break;
            if(j==3){
                ans=i;
                f=1;
            }
        }
        if(f) break;
    }
    printf("%d\n",ans);
}
