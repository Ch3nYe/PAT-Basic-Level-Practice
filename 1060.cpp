//
// Created by chenye on 2020/2/16.
//

#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int n=0;
    cin>>n;
    int num[n+1];
    for (int i = 0; i < n; ++i) {
        cin>>num[i];
    }
    sort(num,num+n,greater<int>());
    int E=1;
    while (E<=n && num[E-1]>E)
    {
        E++;
    }
    cout<<E-1;
    return 0;
}
