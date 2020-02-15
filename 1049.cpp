//
// Created by chenye on 2020/2/14.
//

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    double sum, tmp;
    for (int i = 1; i <= n; ++i) {
        cin>>tmp;
        sum = sum + tmp * i * (n - i + 1);
    }
    printf("%.2f",sum);
    return 0;
}