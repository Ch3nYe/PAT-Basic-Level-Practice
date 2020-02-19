//
// Created by chenye on 2020/2/18.
//

#include <iostream>

using namespace std;

int main() {
    string passwd,tmp;
    int n,cnt=0;
    cin>>passwd>>n;
    getchar();
    while(1)
    {
        getline(cin,tmp);
        if (tmp=="#")
            break;
        cnt++;
        if (cnt<=n && tmp==passwd)
        {
            cout<<"Welcome in";
            break;
        }
        else if (cnt <= n && tmp != passwd)
        {
            cout << "Wrong password: " << tmp << endl;
            if (cnt == n) {
                cout << "Account locked";
                break;
            }

        }
    }

    return 0;
}




