//
// Created by chenye on 2020/2/12.
//

#include <iostream>
using namespace std;
int main() {
    int res[256]={0};
    string a,b;
    cin>>a>>b;
    for (int i = 0; i < a.length(); ++i) {
        res[a[i]]++;
    }
    int count=0;
    for (int i = 0; i < b.length(); ++i) {
        if(res[b[i]]>0)
            res[b[i]]--;
        else
            count++;
    }
    if(count==0)
        cout<<"Yes "<<a.length()-b.length();
    else
        cout<<"No "<<count;
    return 0;
}