//
// Created by chenye on 2020/2/14.
//

#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int n,sc,seq,tmp;
    int team[10000]={0};
    cin>>n;
    for (int i = 0; i < n; ++i) {
        scanf("%d-%d %d",&seq,&tmp,&sc);
        team[seq]+=sc;
    }
    int maxi=0;
    for (int i = 1; i < 1000; ++i) {
        if(team[maxi]<team[i])
            maxi=i;
    }
    cout<<maxi<<' '<<team[maxi];

    return 0;
}