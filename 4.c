/*************************************************************************
	> File Name: 4.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时28分12秒
 ************************************************************************/

#include<stdio.h>
bool check(int x)
{
    int a=x,b=0;
    while(a)
    {
        b=b*10+a%10;
        a/=10;
    }
    return b==x;
}
int main()
{
    int ans=0;
    for(int i=100;i<1000;i++){
        for(int j=100;j<1000;j++){
            if(check(i*j)&&i*j>ans){
                ans=i*j;
            }
        }
    }
    printf("%d\n",ans);
}
