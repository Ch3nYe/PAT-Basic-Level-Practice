//
// Created by chenye on 2020/2/11.
//

#include <iostream>
#include <string.h>

using namespace std;
int main() {
    char str[1001];
    int n[10]={0};
    cin>>str;
    for (int i = 0; i < strlen(str); ++i)
    {
           n[str[i]-'0']++;
    }
    for (int i = 0; i < 10; ++i)
    {
        if(n[i]!=0)
            cout<<i<<':'<<n[i]<<endl;
    }
    return 0;
}