//
// Created by chenye on 2020/2/12.
//★★★★

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int len=s.length(),result=0,cntp=0,cntt=0;
    for(int i=0;i<len;i++){
        if(s[i]=='T')
            cntt++;
    }
    for(int i=0;i<len;i++){
        if(s[i]=='P')cntp++;
        if(s[i]=='T')cntt--;
        if(s[i]=='A')result=(result+(cntp*cntt)%1000000007)%1000000007;
    }
    cout<<result;
    return 0;
}