//
// Created by chenye on 2020/2/10.
//

#include <iostream>
#include <string.h>

using namespace std;
int main() {
    char str1[100],str2[100];
    char str11[100],str22[100];
    char day[7][4]={"MON","TUE","WEN","THU","FRI","SAT","SUN"};
    int hours=0;
    int flag=1;
    cin>>str1>>str2;
    cin>>str11>>str22;
    for(int i=0; i<=strlen(str1)&&i<=strlen(str2); i++)
    {
        if(str1[i]==str2[i])//day
        {
            if(flag==2)//hours
            {
                if(str1[i]>='A'&& str1[i]<='N')
                {
                    hours=str1[i]-'A'+10;
                    cout<<hours;
                    break;
                }
                else if( str1[i]>='0'&& str1[i]<='9')
                {
                    hours=str1[i]-'0';
                    cout<<'0'<<hours;
                    break;
                }
            }
            if(flag==1 && str1[i]>='A'&& str1[i]<='G')
            {
                cout<<day[str1[i]-'A']<<' ';
                flag=2;
            }
        }
    }

    for(int i=0; i<=strlen(str11)&&i<=strlen(str22); i++)
    {
        if(str11[i]==str22[i] &&((str11[i]>='a'&&str11[i]<='z')||(str11[i]>='A'&&str11[i]<='Z')))
        {
            if(i<10)
                cout<<':'<<'0'<<i;
            else
                cout<<':'<<i;

            break;
        }
    }

    return 0;
}