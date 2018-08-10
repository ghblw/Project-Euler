/*************************************************************************
	> File Name: 38.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 17时36分36秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAXN 10000
int digit(int x)
{
    return floor(log10(x))+1;
}
long long cal(int x)
{
    int num[10]={0};
    int i=1,j=0;
    long long ans=0,res;
    while(j<9)
    {
        res=i*x;
        while(res)
        {
            if(res%10==0) return 0;
            if(num[res%10]) return 0;
            num[res%10]=1;
            res/=10;
            j++;
        }
        ans=ans*((int)pow(10,digit(i*x)))+i*x;
        i++;
    }
    return ans;
}
int main()
{
    long long ans=0;
    for(int i=1;i<=MAXN;i++){
        long long tmp=cal(i);
        if(tmp>ans) ans=tmp;
    }
    printf("%lld\n",ans);
    return 0;
}
