//
// Created by chenye on 2020/2/11.
//

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    char num[13][5]={"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    char num2[13][5]={"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    char str[200];
    int tmpn=0;
    cin>>n;getchar(); //cin dont get /n
    for (int i = 0; i < n; ++i)
    {
        //gets(str);//gets() get \n
        cin.getline(str,200,'\n');
        if(str[0]>='0'&&str[0]<='9')// earth language
        {
            tmpn = atoi(str);
            if(tmpn<=12)
                cout<<num[tmpn]<<endl;
            else// tmpn<169 most 2bit
            {
                cout<<num2[tmpn/13-1]<<" ";
                cout<<num[tmpn%13]<<" \n";
            }
        }
        else//marth language 13 进制
        {
            if(strlen(str)<=4)
            { // 由于存在tam （=13）这种火星文所以需要做如下判断
                int sum=0;
                for (int j = 0; j < 13; ++j) {
                    if(!strcmp(str,num[j]))
                    {sum=j;break;}
                }
                for (int j = 0; j < 12; ++j) {
                    if(!strcmp(str,num2[j]))
                    {sum=(j+1)*13;break;}
                }
                cout<<sum<<endl;
            }
            else
            {
                int sum=0;
                char tmps[4];
                strcpy(tmps,str);tmps[3]='\0';
                for (int j = 0; j < 12; ++j) {
                    if(!strcmp(tmps,num2[j]))
                    {sum=(j+1)*13;break;}
                }
                strcpy(tmps,str+4);
                for (int j = 0; j < 13; ++j) {
                    if(!strcmp(tmps,num[j]))
                    {sum+=j;break;}
                }

                cout<<sum<<endl;
            }
        }
    }
    return 0;
}

/*
 test data:
6
168
0
tret
tam tret
tam jan
tret

 */