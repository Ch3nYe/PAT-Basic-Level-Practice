//
// Created by chenye on 2020/2/10.
//

#include <iostream>

using namespace std;
// C 代表“锤子”、J 代表“剪刀”、B 代表“布”

int A[2][3]={{0,0,0},{0,0,0}},B[2][3]={{0,0,0},{0,0,0}};//A[0] A使用CJB获胜的次数 A[1] A胜平负次数 同理B

int judge(char a,char b)
{
    if(a=='C'&&b=='C')
    {A[1][1]++;B[1][1]++;return 0;}
    else if (a=='C'&&b=='J')
    {A[0][0]++;A[1][0]++;B[1][2]++;return 1;}
    else if (a=='C'&&b=='B')
    {B[0][2]++;B[1][0]++;A[1][2]++;return -1;}
    else if (a=='J'&&b=='C')
    {B[0][0]++;B[1][0]++;A[1][2]++;return -1;}
    else if (a=='J'&&b=='J')
    {A[1][1]++;B[1][1]++;return 0;}
    else if (a=='J'&&b=='B')
    {A[0][1]++;A[1][0]++;B[1][2]++;return 1;}
    else if (a=='B'&&b=='C')
    {A[0][2]++;A[1][0]++;B[1][2]++;return 1;}
    else if (a=='B'&&b=='J')
    {B[0][1]++;B[1][0]++;A[1][2]++;return -1;}
    else if (a=='B'&&b=='B')
    {A[1][1]++;B[1][1]++;return 0;}
}

int main() {
    int n;

    char a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        judge(a,b);
    }
    cout<<A[1][0]<<' '<<A[1][1]<<' '<<A[1][2]<<endl;
    cout<<B[1][0]<<' '<<B[1][1]<<' '<<B[1][2]<<endl;
    char maxA='B',maxB='B';
    int max=A[0][2];
    if(A[0][0]>max)
    {
        max=A[0][0];
        maxA='C';
    }
    if(A[0][1]>max)
    {
        max=A[0][1];
        maxA='J';
    }

    max=B[0][2];
    if(B[0][0]>max)
    {
        max=B[0][0];
        maxB='C';
    }
    if(B[0][1]>max)
    {
        max=B[0][1];
        maxB='J';
    }
    cout<<maxA<<' '<<maxB;
    return 0;
}