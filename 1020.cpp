//
// Created by chenye on 2020/2/10.
//

#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

typedef struct
{
    double zongjia;
    double kucun;
    double danjia;
}cakes;

int cmp(cakes c1, cakes c2)
{
    return c1.danjia>c2.danjia?1:0;
}

int main() {
    int n;
    double maxq;
    cin>>n>>maxq;

    cakes ca[n+1];

    for(int i=0; i<n; i++)
    {
        cin>>ca[i].kucun;
    }
    for(int i=0; i<n; i++)
    {
        cin>>ca[i].zongjia;
        ca[i].danjia=ca[i].zongjia/ca[i].kucun;
    }
    sort(ca,ca+n,cmp);

    double maxbenf=0;
    for(int i=0; i<n; i++)
    {
        if(maxq<=ca[i].kucun)//如果最大需求量不大于当前库存
        {
            maxbenf+=ca[i].danjia*maxq;//最大收益即当前单价乘以最大需求量
            break;//注意及时退出
        }
        else
        {
            maxbenf+=ca[i].zongjia;//否则最大收益累加当前总价
            maxq-=ca[i].kucun;//需求量减去当前库存
        }
    }
    printf("%.2lf",maxbenf);

    return 0;
}