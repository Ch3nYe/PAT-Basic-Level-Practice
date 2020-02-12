//
// Created by chenye on 2020/2/11.
//

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char str1[1000],str2[1000],bad[1000]={'\0'};
    int l=0;
    cin>>str1>>str2;
    for (int i = 0, j = 0; i<strlen(str1); ) {
        if(str1[i]==str2[j])
        {i++;j++;}
        else if (str1[i]!=str2[j])
        {
            int flag=1;
            for(int k=0; k<l; k++)
            {
                if(bad[k]==str1[i]||bad[k]==str1[i]-32)
                {flag=0;break;}
            }
            if(flag==1)
                bad[l++]=str1[i]>=97?str1[i]-32:str1[i];
            i++;
        }
    }
    cout<<bad;
    return 0;
}

/*
// by 柳婼 还是人家牛皮
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s1, s2, ans;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
        if (s2.find(s1[i]) == string::npos && ans.find(toupper(s1[i])) == string::npos)
            ans += toupper(s1[i]);
    cout << ans;
    return 0;
}
 */