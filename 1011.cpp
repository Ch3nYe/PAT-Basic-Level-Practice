//
// Created by chenye on 2020/2/10.
//

#include <iostream>
using namespace std;
int main() {
    int T;
    cin>>T;
    for (int i=1; i<=T; i++){
        long long int A,B,C;
        cin>>A>>B>>C;
        if (A+B>C) {
            cout<<"Case #"<<i<<": true\n";
        } else cout<<"Case #"<<i<<": false\n";
    }
    return 0;
}


