//
// Created by chenye on 2020/2/12.
//
// ☆
#include <iostream>
#include <stdio.h>

using namespace std;

/* 用辗转相除法求两个数的最大公约数 */
int gcd(long a, long b){
    return b == 0 ? a : gcd(b, a % b);
}

void printfunc(long a, long b)
{
    if(b==0)
    {
        printf("Inf");
        return ;
    }
    int sign = 1;
    long gcdnum;
    if(a<0)
    {
        a = -a;
        sign *= -1;
    }
    if(b<0)
    {
        b = -b;
        sign *= -1;
    }
    gcdnum = gcd(a,b);
    a = a/gcdnum;
    b = b/gcdnum;

    if(sign == -1)
        printf("(-");
    if(b == 1) {
        printf("%ld", a);
    } else if (a>b) {//a/b大于1
        printf("%ld %ld/%ld",a/b, a%b, b);
    }else {
        printf("%ld/%ld",a,b);
    }
    if(sign == -1)
        printf(")");
}

int main() {

    long a1,a2,b1,b2;
    char op[4] = {'+', '-', '*', '/'};

    scanf("%ld/%ld %ld/%ld",&a1,&b1,&a2,&b2);

    for (int i = 0; i < 4; ++i) {
        printfunc(a1,b1);
        printf(" %c ",op[i]);
        printfunc(a2,b2);
        printf(" = ");
        switch (op[i]){
            case '+':
                printfunc(a1*b2+a2*b1,b1*b2);
                break;
            case '-':
                printfunc(a1*b2-a2*b1,b1*b2);
                break;
            case '*':
                printfunc(a1*a2,b1*b2);
                break;
            case '/':
                printfunc(a1*b2,b1*a2);
                break;
        }
        printf("\n");
    }

    return 0;
}