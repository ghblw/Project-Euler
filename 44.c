/*************************************************************************
	> File Name: 44.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 17时58分42秒
 ************************************************************************/

#include<stdio.h>
#define MAXN 50000
long long cal(long long x)
{
    return x*(3*x-1)/2;
}
bool check(long long x)
{
    long long head=0,tail=MAXN,mid;
    while(head<=tail)
    {
        mid=(head+tail)>>1;
        if(cal(mid)==x) return 1;
        if(cal(mid)<x) head=mid+1;
        if(cal(mid)>x) tail=mid-1;
    }
    return 0;
}
int main()
{
    long long k=1,j,ans=0x3f3f3f3f;
    while(cal(k+1)-cal(k)<ans)
    {
        k++;
        j=k-1;
        while((j!=0)&&(cal(k)-cal(j))<ans)
        {
            if(check(cal(k)+cal(j))&&check(cal(k)-cal(j))){
                int tmp=cal(k)-cal(j);
                if(tmp<ans) ans=tmp;
            }
            j--;
        }
    }
    printf("%lld\n",ans);
    return 0;
}
