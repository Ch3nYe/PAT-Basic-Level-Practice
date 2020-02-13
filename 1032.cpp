//
// Created by chenye on 2020/2/12.
//

#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int n,tmpn,tmpsc;
    int sc[100000]={0};
    cin>>n;

    for (int i = 0; i < n; ++i) {
        cin>>tmpn;
        cin>>tmpsc;
        sc[tmpn]+=tmpsc;
    }
    int max=-1,maxi=-1;
    for (int i = 0; i < 100000; ++i) { // 值得注意的是这里需要遍历全部数据，而不是从0到n，输入数据的编号有可能不连续，但是实际测试i<=n即可
    if(max<sc[i])
    {
        max=sc[i];
        maxi = i;
    }
    }
    cout<<maxi<<' '<<max;
    return 0;
}