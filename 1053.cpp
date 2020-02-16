//
// Created by chenye on 2020/2/15.
//

#include <iostream>
using namespace std;
int main() {
    int n,D,k1=0,k2=0;// k1可能空置 k2空置
    double tmp,e;
    cin>>n>>e>>D;
    for (int i = 0; i < n; ++i) {
        int sum=0,K;// 低于e的天数  观察期天数
        cin>>K;
        for (int j = 0; j < K; ++j) {
            cin>>tmp;
            if(tmp<e)
                sum++;
        }
        if(sum>K/2 && K>D)
            k2++;
        else if (sum>K/2)
            k1++;
    }
    printf("%.1lf%% %.1lf%%\n",(double)k1*100/n,(double)k2*100/n);
    return 0;
}