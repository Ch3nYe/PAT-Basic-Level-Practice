//
// Created by chenye on 2020/2/14.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int a1,a2,b1,b2;
    int ca=0,cb=0;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a1>>a2>>b1>>b2;
        if(a1+b1==a2&&a1+b1==b2)
            continue;
        if(a1+b1==a2)
            cb++;
        if(a1+b1==b2)
            ca++;
    }
    cout<<ca<<' '<<cb;
    return 0;
}