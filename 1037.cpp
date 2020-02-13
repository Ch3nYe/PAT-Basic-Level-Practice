//
// Created by chenye on 2020/2/12.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int Pgall,Psic,Pknut;
    int Agall,Asic,Aknut;
    scanf("%d.%d.%d",&Pgall, &Psic, &Pknut);
    scanf("%d.%d.%d",&Agall, &Asic, &Aknut);
    int Psum=Pknut+Psic*29+Pgall*17*29;
    int Asum=Aknut+Asic*29+Agall*17*29;
    int res = Asum-Psum;

    printf("%d.%d.%d",res/493,(abs(res)%493)/29,abs(res)%29);

    return 0;
}