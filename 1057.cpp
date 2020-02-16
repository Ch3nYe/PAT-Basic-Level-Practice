//
// Created by chenye on 2020/2/15.
//

#include <iostream>
#include <cstring>

using namespace std;
int main() {
    string a;
    long long int sum=0;
    getline(cin,a,'\n');

    for (int i = 0; i < a.length(); ++i) {
        a[i] = tolower(a[i]);
        if (islower(a[i]))
            sum+=a[i]-'a'+1;
    }
    int cnt0 = 0, cnt1 = 0;
    while(sum != 0) {
        if(sum % 2 == 0) {
            cnt0++;
        } else {
            cnt1++;
        }
        sum = sum / 2;
    }
    cout<<cnt0<<' '<<cnt1<<endl;
    return 0;
}