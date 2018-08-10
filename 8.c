/*************************************************************************
	> File Name: 8.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 16时24分59秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[1005]={0};
    char str[100]={0};
    while(scanf("%s",str)!=EOF)
    {
        strcat(a,str);
    }
    long long ans=1,zero=0,maxn=0;
    for(int i=0;a[i];i++){
        if(a[i]!='0')ans*=(a[i]-'0');
        else zero++;
        if(i>=13)
        {
            if(a[i-13]!='0'){
                ans/=(a[i-13]-'0');
            }else{
                zero--;
            }
            if(zero==0&&ans>maxn) maxn=ans;
        }
    }
    printf("%lld\n",maxn);
}
