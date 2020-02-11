//
// Created by chenye on 2020/2/10.
//

#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int num;
    int flag=1;
    int numc0=0,numc1=0,numc2=0,numc3=0,numc4=0;
    float num0=0,num1=0,num2=0,num3=0,num4=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        if(num%5==0&&num%2==0)
        {
            numc0++;
            num0+=num;
        }
        else if (num%5==1)
        {
            numc1++;
            num1+=num*flag;
            flag=-flag;
        }
        else if (num%5==2)
        {
            numc2++;
        }
        else if (num%5==3)
        {
            numc3++;
            num3+=(float)num;
        }
        else if (num%5==4)
        {
            numc4++;
            if(num>num4)
                num4=num;
        }
        if(getchar()=='\n')
            break;
    }
    if(numc0)
        printf("%d ",(int)num0);
    else
        printf("N ");
    if(numc1)
        printf("%d ",(int)num1);
    else
        printf("N ");
    if(numc2)
        printf("%d ",numc2);
    else
        printf("N ");
    if(numc3)
        printf("%.1f ",num3/numc3);
    else
        printf("N ");
    if(numc4)
        printf("%d",(int)num4);
    else
        printf("N");
    return 0;
}
