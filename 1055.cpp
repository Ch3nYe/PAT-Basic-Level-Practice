//
// Created by chenye on 2020/2/16.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

typedef struct
{
    string name;
    int height;
}student;

int cmp(student a, student b) {
    return a.height != b.height ? a.height > b.height : a.name < b.name;
}

int main() {
    int N, K;
    cin>>N>>K;
    vector<student> stu(N);
    for (int i = 0; i < N; ++i) {
        cin>>stu[i].name>>stu[i].height;
    }
    sort(stu.begin(),stu.end(),cmp);
    int m = N/K;
    int out[m+K];
    int allcnt=0;//stu 下标计数
    for (int i = 0; i < K; ++i) {// 按行处理
        memset(out,-1,sizeof(int)*(m+K));
        int flag=1;
        if (i==0 && N%K!=0)// 第一行可能需要特殊处理
            for (int j = 0; j < m+N%K; ++j) {
                out[m/2+1+flag*((j+1)/2)] = allcnt+j;
                flag = - flag;
            }
        else
            for (int j = 0; j < m; ++j) {
                out[m/2+1+flag*((j+1)/2)] = allcnt+j;
                flag = - flag;
            }
        // output
        int cnt=0;//本行输出个数计数
        for (int j = 0; cnt < m + (i==0?N%K:0) ; ++j) {
            if (out[j]!=-1)
            {
                if(cnt==0)
                    cout<<stu[out[j]].name;
                else
                    cout<<' '<<stu[out[j]].name;
                cnt++;
            }
        }
        allcnt+=cnt;
        cout<<endl;
    }
    return 0;
}
