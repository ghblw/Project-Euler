/*************************************************************************
	> File Name: 11.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 16时47分54秒
 ************************************************************************/

#include<stdio.h>
int a[30][30]={0};
int d[4][2]={
    1,0,
    0,1,
    1,1,
    1,-1
};
int main()
{
    for(int i=5;i<25;i++){
        for(int j=5;j<25;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int ans=0;
    for(int i=5;i<25;i++){
        for(int j=5;j<25;j++){
            for(int k=0;k<4;k++){
                int tmp=1;
                for(int s=0;s<4;s++){
                    int xx=i+s*d[k][0];
                    int yy=j+s*d[k][1];
                    tmp*=a[xx][yy];
                }
                if(tmp>ans) ans=tmp;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
