//
// Created by chenye on 2020/2/9.
//

#include <iostream>
#include <cmath>

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
    int n,count=0;
    cin>>n;
    for(int i=2; i<=n-2; i++)
    {
        if(judge(i) && judge(i+2))
            count++;
    }
    cout<<count<<endl;
    return 0;
}
