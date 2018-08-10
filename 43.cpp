/*************************************************************************
	> File Name: 43.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 17时39分30秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
int p[10]={2,3,5,7,11,13,17};
long long check(int *num)
{
    long long ans=0;
    int tmp,j=0;
    for(int i=1;i<=7;i++){
        tmp=num[i]*100+num[i+1]*10+num[i+2];
        if(tmp%p[j++]!=0) return 0;
    }
    for(int i=0;i<10;i++){
        ans=ans*10+num[i];
    }
    return ans;
}
int main()
{
    long long ans=0;
    int a[10]={0};
    for(int i=1;i<=9;i++){
        a[i]=i;
    }
    do{
        if(a[0]==0) continue;
        ans+=check(a);
    }while(next_permutation(a,a+10));
    printf("%lld\n",ans);
    return 0;
}
