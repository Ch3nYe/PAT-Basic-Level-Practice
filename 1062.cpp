//
// Created by chenye on 2020/2/17.
//

#include <iostream>
#include <stdio.h>
using namespace std;
int gcd(int a, int b)
{
    return b==0?a:gcd(b,a%b);
}
int main() {
    double a1,a2,b1,b2,a,b,K;

    scanf("%lf/%lf %lf/%lf %lf",&a1,&b1,&a2,&b2,&K);

    a = a1/b1;
    b = a2/b2;
    if (a>b)//13/20 7/18 12 ab大小问题
    {
        swap(a1,a2);
        swap(b1,b2);
    }
    a = a1/b1;
    b = a2/b2;
    int flag=0;
    for (int i = 1; b > (double)i/K; ++i) {
        if ((double)i/K > a)
            if (gcd(i,K)==1)
            {
                if (flag==0)
                    {cout<<i<<'/'<<K;flag=1;}
                else
                    cout<<" "<<i<<'/'<<K;
            }
    }
    return 0;
}
