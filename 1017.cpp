//
// Created by chenye on 2020/2/10.
//

#include <iostream>
#include <cstring>

using namespace std;
int main() {
    char A[1001];
    int B=0,Q=0,R=0,tmp=0;
    cin>>A>>B;
    for(int i=0;i<strlen(A);i++)
    {
        Q = (R*10 + (A[i]-'0'))/B;
        if(strlen(A)>1 && Q==0 && i==0 && Q==0)
            ;
        else
        {
            cout<<Q;
        }
        R = (R*10+A[i]-'0')%B;

    }
    cout<<' '<<R;
    return 0;
}