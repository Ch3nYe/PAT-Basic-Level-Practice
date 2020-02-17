//
// Created by chenye on 2020/2/17.
//

#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int n,a,b;
    double max;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a>>b;
        if (max<sqrt(a*a+b*b))
            max = sqrt(a*a+b*b);
    }
    printf("%.2lf",max);
    return 0;
}