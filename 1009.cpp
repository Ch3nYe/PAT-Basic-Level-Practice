//
// Created by chenye on 2020/2/9.
//

#include <iostream>

using namespace std;

int main() {
    char a[100][20];
    int i=0;
    while(1)
    {
        cin>>a[i++];
        if(getchar()=='\n')
            break;
    }

    while(i>1) cout<<a[--i]<<' ';
    cout<<a[--i];
    return 0;
}
