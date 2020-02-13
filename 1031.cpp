//
// Created by chenye on 2020/2/12.
//

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, flagg=0;
    int W[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char M[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    cin>>n;
    char str[20];
    for (int i = 0; i < n; ++i) {
        cin>>str;
        int sum=0;
        int flag=0;
        for (int j= 0; j < strlen(str)-1; ++j) {
            if(!isdigit(str[j]))
            {flag=1;break;}
            sum+=(str[j]-'0')*W[j];
        }
        sum=sum%11;
        if (flag==1||str[17]!=M[sum])
        {
            cout<<str<<endl;
            flagg=1;
        }
    }
    if(flagg==0)
        cout<<"All passed";
    return 0;
}