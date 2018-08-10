/*************************************************************************
	> File Name: pl.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月02日 星期四 15时03分38秒
 ************************************************************************/

#include<stdio.h>
int jnum[10]={1};
int dnum[10]={1};
int cal(int i,int k)
{
    int ind=k/jnum[i],j=-1;
    while(ind>=0)
    {
        j++;
        ind-=dnum[j];
    }
    dnum[j]=0;
    return j; 
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    k--;
    for(int i=1;i<=10;i++){
        jnum[i]=jnum[i-1]*i;
        dnum[i]=1;
    }
    for(int i=n-1;i>=0;i--){
        printf("%d",cal(i,k));
        k%=jnum[i];
    }
}
