//
// Created by chenye on 2020/2/14.
//

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int main() {
    int N,num[10000]={0};
    int n,m,t=0;
    cin>>N;
    for (int i = 0; i < N; ++i) {
        cin>>num[i];
    }
//    n = sqrt(N); // m>=n
//    m = N/n;
    for (n = sqrt((double)N); n >= 1; n--) {
        if (N % n == 0) {
            m = N / n;
            break;
        }
    }
    int out[m][n];
    sort(num,num+N, greater<int>());
    int level = (m+1)/2;//m/2+m%2
    for (int i = 0; i < level; ++i) {
        for (int j = i; j <= n-1-i && t < N; ++j)
            out[i][j] = num[t++];
        for (int j = i+1; j <= m-2-i && t < N; ++j)
            out[j][n-i-1] = num[t++];
        for (int j = n-i-1; j >= i && t < N; --j)
            out[m - 1 - i][j] = num[t++];
        for (int j = m-i-2; j >= i+1 && t < N; --j)
            out[j][i] = num[t++];
    }
    // display
    for (int i = 0; i < m; i++) {
        for (int j = 0 ; j < n; j++) {
            printf("%d", out[i][j]);
            if (j != n - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}