/*************************************************************************
	> File Name: 24.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 11时24分13秒
 ************************************************************************/

#include<stdio.h>
#define MAXN 1000000
int jnum[10]={1};
int dnum[10]={1};
int p(int n,int k)
{
    int i=k/jnum[n],j=-1;
    while(i>=0)
    {
        j++;
        i-=dnum[j];
    }
    dnum[j]=0;
    return j;
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){
        jnum[i]=i*jnum[i-1];
        dnum[i]=1;
    }
    k--;
    for(int i=n-1;i>=0;i--){
        printf("%d",p(i,k));
        k%=jnum[i];
    }
    printf("\n");
    return 0;
}

