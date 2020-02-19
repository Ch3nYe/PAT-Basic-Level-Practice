//
// Created by chenye on 2020/2/18.
//

#include <iostream>
#include <map>
using namespace std;

int main() {
    int M,N,S,cnt=0;
    string name;
    map<string, int> m;
    cin>>M>>N>>S;
    for (int i = 1; i <= M; ++i) {
        cin>>name;
        m.insert(map<string, int>::value_type(name, 0));
        if (i==S)
        {
            m[name] = 1;
            cout<<name<<endl;cnt++;
        }
        else if (i>S && (i-S)%N==0)
        {
            if (m[name]==0)
            {
                cout<<name<<endl;
                cnt++;
                m[name] = 1;
            }
            else
                S+=1;
        }
    }
    if (cnt==0)
        cout<<"Keep going...";
    return 0;
}
