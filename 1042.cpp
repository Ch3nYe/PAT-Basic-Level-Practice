//
// Created by chenye on 2020/2/14.
//

#include <iostream>

using namespace std;

int main() {
    int count[256]={0};
    string str;
    char tmp;
    getline(cin,str);

    for (int i = 0; i < str.length(); i++)
        str[i] = tolower(str[i]);
    for (int i = 0; i < str.length(); i++)
        if (islower(str[i])) count[str[i] - 'a']++;
//    for (int i = 0; i < str.length(); ++i) {  // 这一段可以替换上面一段
//        if (str[i]>='a'&&str[i]<='z')
//            count[str[i]-'a']++;
//        else if (str[i]>='A'&&str[i]<='Z')
//            count[str[i]-'A']++;
//    }

    int maxi=0;
    for (int i = 1; i < 26; ++i) {
        if(count[maxi]<count[i])
            maxi=i;
    }
    tmp = (char)(maxi+'a');
    cout<<tmp<<' '<<count[maxi];
    return 0;
}

