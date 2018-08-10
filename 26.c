/*************************************************************************
	> File Name: 26.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 11时55分10秒
 ************************************************************************/

#include<stdio.h>
int cal(int x)
{
    int num[1005]={0};//注意数组范围
    int y=1,i=1;
    while((y!=0)&&(num[y]==0))
    {
        num[y]=i++;
        y*=10;
        y%=x;
    }
    if(y==0) return 0;
    return i-num[y];
}
int main()
{
    int maxd=0,maxn=0;
    for(int i=2;i<=1000;i++){
        int tmp=cal(i);
        if(tmp>maxn){
            maxn=tmp;
            maxd=i;
        }
    }
    printf("%d\n",maxd);
    return 0;
}
