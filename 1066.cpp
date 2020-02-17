//
// Created by chenye on 2020/2/17.
//

#include <iostream>
using namespace std;
int main() {
    int m,n,A,B,R;
    cin>>m>>n>>A>>B>>R;
    int out[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>out[i][j];
            if (out[i][j]>=A && out[i][j]<=B)
                out[i][j]=R;
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j==0)
                printf("%03d",out[i][j]);
            else
                printf(" %03d",out[i][j]);
        }
        printf("\n");
    }


    return 0;
}