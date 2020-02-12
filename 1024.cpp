//
// Created by chenye on 2020/2/11.
//

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int len0=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
        if(s[i]=='E')//找到E
        {
            for(int j=i+2;j<s.length();j++)
                len0=len0*10+(s[j]-'0');//计算指数即需要增加的0的长度
            if(s[0]=='-')
                cout<<'-';
            if(len0==0)//若指数为0
            {
                for(int j=1;j<i;j++)//输出下标从1开始到E的串
                    cout<<s[j];
            }
            else if(s[i+1]=='+')//若指数为正
            {
                cout<<s[1];//输出整数部分
                if(len0<i-3)//若0的长度小于小数部分长度
                {
                    for(int j=3;j<3+len0;j++)//输出下标从3开始的0的长度的部分
                        cout<<s[j];
                    cout<<'.';//输出小数点
                    for(int j=3+len0;j<i;j++)//输出小数点后到E之间的部分
                        cout<<s[j];
                }
                else//若0的长度大于等于小数部分长度
                {
                    for(int j=3;j<i;j++)//输出下标从3开始到E的部分
                        cout<<s[j];
                    for(int j=1;j<=len0-(i-3);j++)//输出0长度-小数部分长度的0
                        cout<<0;
                }
            }
            else//若指数为负
            {
                cout<<"0.";//输出0和小数点
                for(int j=1;j<len0;j++)//输出0长度-1的0
                    cout<<0;
                cout<<s[1];//输出原整数部分
                for(int j=3;j<i;j++)//输出原小数部分
                    cout<<s[j];
            }
            return 0;
        }
}