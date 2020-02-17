//
// Created by chenye on 2020/2/17.
//

#include <iostream>
#include <cstring>

using namespace std;
int main() {
    int id[50]={0};
    int n;
    cin>>n;
    char a[n+1][5];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        int sum = 0;
        for (int j = 0; j < strlen(a[i]); ++j) {
            sum+=a[i][j]-'0';
        }
        id[sum]++;
    }
    int cnt=0;
    for (int i = 0; i < 50; ++i) {
        if(id[i]>=1)
            cnt++;
    }
    cout<<cnt<<endl;
    int flag=0;
    for (int i = 0; i < 50; ++i) {
        if(id[i]>=1)
            if (flag==0)
                {cout<<i;flag=1;}
            else
                cout<<' '<<i;
    }

    return 0;
}