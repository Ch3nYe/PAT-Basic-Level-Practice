//
// Created by chenye on 2020/2/15.
//

#include <iostream>
using namespace std;
int main() {
    int n,sum=0,tmp;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>tmp;
        sum+=tmp;
    }
    cout<<11*(n-1)*sum;

    return 0;
}
