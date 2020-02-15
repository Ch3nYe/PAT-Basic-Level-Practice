//
// Created by chenye on 2020/2/14.
//
// by 柳婼
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string a, b, c;
    cin >> a >> b;
    int lena = a.length(), lenb = b.length();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if (lena > lenb)
        b.append(lena - lenb, '0');
    else
        a.append(lenb - lena, '0');
    char str[14] = {"0123456789JQK"};
    for (int i = 0; i < a.length(); i++) {
        if (i % 2 == 0) {
            c += str[(a[i] - '0' + b[i] - '0') % 13];
        } else {
            int temp = b[i] - a[i];
            if (temp < 0) temp = temp + 10;
            c += str[temp];
        }
    }
    for (int i = c.length() - 1; i >= 0; i--)
        cout << c[i];
    return 0;
}

//#include <iostream>
//#include <algorithm>
//#include <stdlib.h>
//#include <cstring>
//
//using namespace std;
//int main() {
//    string str1,str2;
//    char out[1000]={'\0'};
//    string num = "0123456789JQK";
//    cin>>str1>>str2;
//    reverse(str1.begin(),str1.end());
//    reverse(str2.begin(),str2.end());
//    int i;
//    for (i = 0; i < str1.length() && i < str2.length(); ++i) {
//        if(i%2==0)//奇数位
//        {
//            out[i]=num[((str1[i]-'0')+(str2[i]-'0'))%13];
//        } else {
//            if(str2[i]-str1[i] < 0)
//                out[i]=str2[i]-str1[i]+10+'0';
//            else
//                out[i]=str2[i]-str1[i]+'0';
//        }
//    }
//
//    if(str1.length() < str2.length())
//        for (; i < str2.length(); ++i) {
//            out[i]=str2[i];
//        }
//    else
//        for (; i < str1.length(); ++i) {
//            if(i%2==1) // 偶数位
//                out[i]='0' - str1[i] + 10 + '0';
//            else //奇数位
//                out[i]=str1[i];
//        }
//    reverse(out,out+i);
//    cout<<out;
//    return 0;
//}