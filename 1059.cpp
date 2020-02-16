//
// Created by chenye on 2020/2/16.
//

#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstring>

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
    int n,stu[10000];memset(stu,-1,10000*sizeof(int));
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        int tmp;
        scanf("%d",&tmp);
        if (i==1)
            stu[tmp] = 0;
        else if (judge(i))
            stu[tmp] = 1;
        else
            stu[tmp] = 2;
    }
    cin>>n;
    for (int i = 0; i < n; ++i) {
        int tmp;
        scanf("%d",&tmp);
        if(stu[tmp] == 0)
        {printf("%04d: Mystery Award\n",tmp);stu[tmp]=-2;}
        else if (stu[tmp] == 1)
        {printf("%04d: Minion\n",tmp);stu[tmp]=-2;}
        else if (stu[tmp] == 2)
        {printf("%04d: Chocolate\n",tmp);stu[tmp]=-2;}
        else if (stu[tmp]==-1)
        {printf("%04d: Are you kidding?\n",tmp);}
        else if (stu[tmp]==-2)
        {printf("%04d: Checked\n",tmp);}
    }

    return 0;
}

