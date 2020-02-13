//
// Created by chenye on 2020/2/12.
//
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;
int main() {
    int n,m,tmp;
   // cin>>n; //经过测试，第一个n的输入必须使用scanf，不知道为什么
    scanf("%d", &n);
    vector<int> sc(101);
    for (int i = 0; i < n; ++i)
    {
//        cin>>tmp;
        scanf("%d", &tmp);
        sc[tmp]++;
    }
//    cin>>m;
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
//        cin>>tmp;
        scanf("%d", &tmp);
        if (i != 0) cout<<' ';
        cout<<sc[tmp];
    }
    return 0;
}
