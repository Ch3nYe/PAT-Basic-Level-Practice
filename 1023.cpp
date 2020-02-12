//
// Created by chenye on 2020/2/11.
//

#include <iostream>

using namespace std;

int main() {
    int num[10]={0},tmp;

    for(int i=0; i<10; i++)
        cin>>num[i];

    if(num[0]!=0) // have 0
    {
        for (int i = 1; i < 10; ++i) {
            if(num[i])
            {cout<<i;num[i]--;break;}
        }
    }
    for (int i = 0; i < 10; ++i)
    {
        while(num[i]--)
            cout<<i;
    }

    return 0;
}