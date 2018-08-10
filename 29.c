/*************************************************************************
	> File Name: 29.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 12时56分08秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXN 10005
#define MAXM 205
int *result[MAXN+5];
int len=0;
bool find(int *tmp)
{
    for(int i=0;i<len;i++){
        if(memcmp(result[i],tmp,sizeof(int)*MAXM)!=0) continue;
        return 1;
    }
    return 0;
}
int *get_num(int a,int b)
{
    int *num=(int*)calloc(sizeof(int),MAXM);
    num[0]=num[1]=1;
    for(int i=0;i<b;i++){
        for(int j=1;j<=num[0];j++) num[j]*=a;
        for(int j=1;j<=num[0];j++){
            if(num[j]<10) continue;
            num[j+1]+=num[j]/10;
            num[j]%=10;
            if(j==num[0]) num[0]++;
        }
    }
    return num;
}
int main()
{
    int *tmp;
    for(int i=2;i<=100;i++){
        for(int j=2;j<=100;j++){
            tmp=get_num(i,j);
            if(!find(tmp)){
                result[len++]=tmp;
            }else{
                free(tmp);
            } 
        }
    }
    printf("%d\n",len);
}
