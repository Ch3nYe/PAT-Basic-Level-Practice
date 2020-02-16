//
// Created by chenye on 2020/2/15.
//

#include <iostream>
#include <cstring>

using namespace std;
int main() {
    int n,c=0;
    char a[100],b[100];
    double tmp,sum=0;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        scanf("%s", a);
        sscanf(a,"%lf",&tmp);
        sprintf(b,"%.2lf",tmp);
        int flag=0;
        for (int j = 0; j < strlen(a); ++j) {
            if(a[j]!=b[j])
            {flag=1;break;}
        }
        if(flag==1 || tmp>1000 || tmp<-1000)
            printf("ERROR: %s is not a legal number\n",a);
        else
        {sum+=tmp;c++;}
    }
    if(c==0)
        printf("The average of 0 numbers is Undefined\n");
    else if (c == 1)
        printf("The average of 1 number is %.2f\n", sum);
    else
        printf("The average of %d numbers is %.2lf\n",c,sum/c);

    return 0;
}


