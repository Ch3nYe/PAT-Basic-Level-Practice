//
// Created by chenye on 2020/2/11.
//

#include <stdio.h>
#include <iostream>

int main()
{
    int a,b,d;
    int sum,i=0,j;
    int result[100];
    scanf("%d %d %d",&a,&b,&d);
    sum=a+b;
    while(sum)
    {
        result[i++]=sum%d;
        sum=sum/d;
    }
    for(j=i-1;j>=0;j--)
        printf("%d",result[j]);
    if(i==0) printf("0");
    return 0;
}