//
// Created by chenye on 2020/2/10.
//

#include<iostream>
#include<algorithm>  //sort

using namespace std;

int main()
{
    string str;
    int a[4]={0,0,0,0};
    int d=0,x=0,cha=0;  //较大值 较小值初始化  输入值
    cin>>str;
    int len=str.length();
    for(int i=0;i<len;i++){
        a[i]=str[i]-'0';
    }

    if (a[1]==a[2]&&a[2]==a[3]&&a[3]==a[0])  {
        cout<<str<<" - "<<str<<" = "<<"0000";
    }
    else{
        while(cha!=6174)
        {
            sort(a,a+4,greater<int>());
            for(int i=0;i<4;i++){
                d=10*d+a[i];
                x=10*x+a[3-i];   //注意789  应该表示为0789
            }
            cha= d-x;
            printf("%04d - %04d = %04d\n",d,x,cha);

            a[3]=cha%10;
            a[2]=(cha/10)%10;
            a[1]=(cha/100)%10;
            a[0]=cha/1000;
            d=0;
            x=0;

        }
    }

    return 0;
}