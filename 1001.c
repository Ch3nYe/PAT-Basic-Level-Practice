//
// Created by chenye on 2020/2/9.
//

#include <stdio.h>

int main() {
    int n;
    int count=0;
    scanf("%d",&n);
    while(n!=1)
    {
        count++;
        n = n%2==0?n/2:(3*n+1)/2;
    }
    printf("%d\n",count);

    return 0;
}
