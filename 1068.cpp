//
// Created by chenye on 2020/2/18.
//

#include <iostream>
#include <cmath>
#include <map>
using namespace std;

int M,N,TOL;
int c[1001][1001];
int dir[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}};
bool judge(int i, int j) {
    for (int k = 0; k < 8; k++) {
        int tx = i + dir[k][0];
        int ty = j + dir[k][1];
        if (tx >= 0 && tx < M && ty >= 0 && ty < N && abs(c[i][j] - c[tx][ty]) <= TOL) return false;
    }
    return true;
}

int main() {
    int x=0,y=0,cnt=0;
    map<int, int> mapp;
    cin>>N>>M>>TOL;// N列 M行
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin>>c[i][j];
            mapp[c[i][j]]++;
        }
    }

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (mapp[c[i][j]]==1 && judge(i,j))
            {
                    mapp[c[i][j]]=1;
                    cnt++;
                    x = i+1;
                    y = j+1;
            }
        }
    }
    if (cnt==1)
        printf("(%d, %d): %d", y, x, c[x-1][y-1]);
    else if (cnt==0)
        printf("Not Exist");
    else
        printf("Not Unique");
    return 0;
}
