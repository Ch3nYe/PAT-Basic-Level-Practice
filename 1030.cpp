//
// Created by chenye on 2020/2/11.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    long long int n,q,res=0;
    cin>>n>>q;
    vector<int> num(n);
    for (int i = 0; i < n; ++i) {
        cin>>num[i];
    }
    sort(num.begin(),num.end());
    for (int i = 0; i < n; ++i) {
        for (int j = i+res; j < n; ++j) {
            if(num[i]*q<num[j])
                break;
            if(j-i+1>res)
                res = j-i+1;
        }
    }
    cout<<res;
    return 0;
}