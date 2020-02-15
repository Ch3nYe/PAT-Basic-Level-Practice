//
// Created by chenye on 2020/2/14.
//

#include <iostream>
using namespace std;
int main() {
    string str;
    string c = "PATest";
    int count[6]={0};
    getline(cin,str,'\n');
    for (int i = 0; i < str.length(); ++i) {
        switch (str[i]) {
            case 'P': count[0]++;break;
            case 'A': count[1]++;break;
            case 'T': count[2]++;break;
            case 'e': count[3]++;break;
            case 's': count[4]++;break;
            case 't': count[5]++;break;
        }
    }
    for (int i = 0; (count[0]||count[1]||count[2]||count[3]||count[4]||count[5]); ++i) {
        if(count[i%6]>0)
        {
            count[i%6]--;
            cout<<c[i%6];
        }
    }
    return 0;
}