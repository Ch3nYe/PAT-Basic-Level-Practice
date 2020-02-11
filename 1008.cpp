//
// Created by chenye on 2020/2/9.
//
// ★★★★★
#include <iostream>

using namespace std;

void reverse(int a[], int start, int end){
    for(int i=start; i<=(start+end)/2; i++){
        int tmp = a[i];
        a[i] = a[start+end-i];
        a[start+end-i] = tmp;
    }
}

int main(){
    int n, m;
    cin>>n>>m;
    m %= n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    reverse(a, 0, n-m-1);
    reverse(a, n-m, n-1);
    reverse(a, 0, n-1);
    int i;
    for( i=0; i<n-1; i++){
        cout<<a[i]<<' ';
    }
    cout<<a[i];
    return 0;
}
