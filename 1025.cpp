//
// Created by chenye on 2020/2/11.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int first,n,k,tmp;
    int data[100001],next[100001],list[100001];
    cin>>first>>n>>k;

    for(int i=0; i<n; i++)
    {
        cin>>tmp;
        cin>>data[tmp];
        cin>>next[tmp];
    }
    int count=0;
    while (first!=-1)
    {
        list[count++] = first;
        first = next[first];
    }
    for (int j = 0; j < (count - count%k); j+=k)
        reverse(list+j,list+j+k);
    int l=0;
    for ( l = 0; l < count-1; ++l)
    {
        printf("%05d %d %05d\n",list[l],data[list[l]],list[l+1]);
    }
    printf("%05d %d -1",list[l],data[list[l]]);

    return 0;
}