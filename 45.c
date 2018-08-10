/*************************************************************************
	> File Name: 45.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月03日 星期五 23时26分03秒
 ************************************************************************/

#include<stdio.h>
long long T(long long x)
{
    return x*(x+1)/2;
}
long long P(long long x)
{
    return x*(3*x-1)/2;
}
long long H(long long x)
{
    return x*(2*x-1);
}
bool check(long long (*hs)(long long),long long x)
{
    int head=0,tail=x,mid;
    while(head<=tail)
    {
        mid=(head+tail)>>1;
        if(hs(mid)==x) return mid;
        if(hs(mid)<x) head=mid+1;
        if(hs(mid)>x) tail=mid-1;
    }
    return 0;
}
int main()
{
    int n=144;
    while(!(check(T,H(n))&&check(P,(H(n)))))
    {
        n++;
    }
    printf("%lld\n",H(n));
}
