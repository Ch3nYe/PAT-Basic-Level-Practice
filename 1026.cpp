//
// Created by chenye on 2020/2/11.
//

#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
    double n,m;
    cin>>n>>m;
    int res = int((m-n+50)/100);//向上取整
    printf("%02d:%02d:%02d",res/3600,(res%3600)/60,res%3600%60);
    return 0;
}