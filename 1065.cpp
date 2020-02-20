//
// Created by chenye on 2020/2/17.
//

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
int main() {
    int N,M,tmp,tmp2;
    int couple[100000]={0};
    int getcouple[100000]={0};
    int guest[50000]={0};
    cin>>N;
    for (int i = 0; i < N; ++i) {
        cin>>tmp>>tmp2;
        couple[tmp] = 1;
        couple[tmp2] = 1;
        getcouple[tmp] = tmp2;
        getcouple[tmp2] = tmp;

    }
    cin>>M;
    for (int i = 0; i < M; ++i) {
        cin>>guest[i];
    }
    int cnt=0,out[50000];
    for (int i = 0; i < M; ++i) {
        if (couple[guest[i]] == 1)//have couple
        {
            int flag=0;
            for (int j = 0; j < M; ++j) {
                if (getcouple[guest[i]]==guest[j])
                {flag=1;break;}
            }
            if (flag==0)
            {out[cnt++]=guest[i];}
        }
        else
        {out[cnt++]=guest[i];}
    }
    cout<<cnt<<endl;
    sort(out,out+cnt,less<int>());
    for (int i = 0; i < cnt; ++i) {
        if (i == 0)
            printf("%05d",out[i]);
        else
            printf(" %05d",out[i]);
    }
    return 0;
}