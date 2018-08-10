/*************************************************************************
	> File Name: 39.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 01时04分44秒
 ************************************************************************/
 #include<stdio.h>
 #define MAXN 1000
 int num[MAXN+5]={0};
 int gcd(int a,int b)
 {
     if(!b) return a;
     return gcd(b,a%b);
 }
 int main()
 {
     for(int i=1;i*i<=MAXN;i++){
         for(int j=1;j<i;j++){
             if(gcd(i,j)!=1) continue;
             int a=i*i-j*j;
             int b=2*i*j;
             int c=i*i+j*j;
             int p=a+b+c;
             for(int i=p;i<=MAXN;i+=p){
                 num[i]++;
             }
         }
     }
     int maxp=0,maxn=0;
     for(int i=1;i<=MAXN;i++){
         if(num[i]>maxn){
             maxn=num[i];
             maxp=i;
         }
     }
     printf("%d\n",maxp);
     return 0;
 }
