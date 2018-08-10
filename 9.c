/*************************************************************************
	> File Name: 9.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月02日 星期四 23时23分39秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    for(int i=1;i<=30;i++){
        for(int j=1;j<i;j++){
            int a=i*i-j*j;
            int b=2*i*j;
            int c=i*i+j*j;
            if(a+b+c==1000) printf("%d\n",a*b*c);
        }
    }
    return 0;
}
