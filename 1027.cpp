//
// Created by chenye on 2020/2/11.
//

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    int k;
    char x;
    cin>>n>>x;
    if(n==0)
    {printf("0");return 0;}

    k=sqrt((n+1)/2);
    for (int i = 0; i < k; ++i) {// 上
        int j=0;
        while (j<i)
        {printf(" ");j++;}
        j=0;
        while (j<2*(k-i)-1)
        {printf("%c",x);j++;}
        printf("\n");
    }

    for (int i = 1; i < k; ++i) {// 下
        int j=0;
        while (j<k-i-1)
        {printf(" ");j++;}
        j=0;
        while (j<=2*i)
        {printf("%c",x);j++;}
        printf("\n");
    }
    printf("%d",n-2*k*k+1);
    return 0;
}