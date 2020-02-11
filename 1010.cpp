//
// Created by chenye on 2020/2/9.
//

#include<stdio.h>

using namespace std;

int main()
{
    int a=0,b=0,g=0;
    scanf("%d %d",&a,&b);
    if(b==0)
    {
        printf("0 0");
        return 0;
    }
    else if(b!=0)
    {
        printf("%d %d",a*b,b-1);
    }
    while(scanf("%d %d",&a,&b))
    {
        if(b<-1000)
        {
            return 0;
        }
        if(b==0)
        {
            return 0;
        }
        else if(a==0&&b==0)
        {
            printf(" 0 0");
            return 0;
        }
        else if(b!=0)
        {
            printf(" %d %d",a*b,b-1);
        }
        b=g;
    }
    return 0;

}

