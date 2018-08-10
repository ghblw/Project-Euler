/*************************************************************************
	> File Name: 33.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 16时09分04秒
 ************************************************************************/

#include<stdio.h>
int gcd(int a,int b)
{
    if(!b) return a;
    return gcd(b,a%b);
}
bool check(int x,int y)
{
    int x1=x/10,x2=x%10;
    int y1=y/10,y2=y%10;
    if((!x2)&&(!y2)) return 0;
    if(x1==y1) return x*y2==x2*y;
    if(x1==y2) return x*y1==x2*y;
    if(x2==y1) return x*y2==x1*y;
    if(x2==y2) return x*y1==x1*y;
    return 0;
}
int main()
{
    int x=1,y=1;
    for(int i=10;i<100;i++){
        for(int j=i+1;j<100;j++){
            if(check(i,j)){
                x*=i;
                y*=j;
            }
        }
    }
    y/=gcd(y,x);
    printf("%d\n",y);
    return 0;
}
