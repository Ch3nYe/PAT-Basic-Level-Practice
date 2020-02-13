//
// Created by chenye on 2020/2/12.
//

#include <iostream>
using namespace std;
int main() {
    int n;
    char c;
    cin>>n>>c;
    for (int i = 0; i < n; ++i) {
        cout<<c;
    }
    cout<<endl;
    for (int j = 1; j < (n+1)/2-1; ++j) {//如果n是奇数需要向上取整
        cout<<c;
        for (int i = 1; i < n-1; ++i) {
            cout<<' ';
        }
        cout<<c<<endl;
    }
    for (int i = 0; i < n; ++i) {
        cout<<c;
    }

    return 0;
}