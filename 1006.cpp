//
// Created by chenye on 2020/2/9.
//

#include <iostream>

using namespace std;

int main() {
    int n,i=0;
    int a[5];
    cin>>n;
    while(n)
    {
        a[i++]=n%10;
        n/=10;
    }
    if(i==3)
        for(int j=a[--i];j>0;j--)
            cout<<"B";
    if (i==2)
        for(int j=a[--i];j>0;j--)
            cout<<"S";
    if(i==1)
    {
        int tmp=1,tmpa = a[--i];
        while(tmpa--)
            cout<<tmp++;
    }

    return 0;
}
