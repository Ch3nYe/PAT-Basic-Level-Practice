//
// Created by chenye on 2020/2/10.
//

#include <iostream>
#include <math.h>
using namespace std;

int judge(int n)
{
    int k,i;
    k=(int)sqrt( (double)n);
    for(i=2;i<=k;i++)
        if(n%i==0)
            break;
    return i>k?1:0;
}

int main() {
    int m,n;
    cin>>m>>n;
    long long int i=0,j=0;
    for(i=2;j<m-1;i++)
    {
        if(judge(i))
            j++;
    }
    int flag=0;
    for(;j<n-1;i++)
    {
        if(judge(i))
        {
            j++;
            cout<<i<<' ';
            flag++;
            if(flag==9)
            {
                i++;
                for(;j<n-1;i++)
                    if(judge(i))
                    {
                        j++;
                        cout<<i<<endl;
                        flag=0;
                        break;
                    }
            }
        }
    }
    for(;j<=n-1;i++)
    {
        if(judge(i))
        {
            j++;
            cout<<i;
        }
    }
    return 0;
}