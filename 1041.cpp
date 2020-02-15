//
// Created by chenye on 2020/2/14.
//

#include <iostream>
using namespace std;
int main() {
    string stu[1001][2],sn,sks ;// stu[0]存储学号，stu[1]存储考试座位号
    int n,tmp;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>sn>>tmp>>sks;
        stu[tmp][0]=sn;
        stu[tmp][1]=sks;
    }
    int m;
    cin>>m;
    for (int i = 0; i < m; ++i) {
        cin>>tmp;
        cout<<stu[tmp][0]<<' '<<stu[tmp][1]<<endl;
    }
    return 0;
}