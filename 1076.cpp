//
// Created by chenye on 2020/2/21.
//

#include <iostream>
#include <map>
#include <cstring>

using namespace std;
int main() {
    int n;
    string tmp;
    cin>>n;
    char res[n+1];
    memset(res,'\0',(n+1)*sizeof(char));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin>>tmp;
            if (tmp[2] == 'T')
               res[i] = tmp[0] - 'A'+ '1';
        }
    }
    printf("%s",res);
    return 0;
}