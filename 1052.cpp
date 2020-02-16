//
// Created by chenye on 2020/2/15.
//

#include <iostream>
#include <cstring>

using namespace std;
int main() {
    int n;
    char c[3][11][5]={'\0'};
    char nu[] = "Are you kidding me? @\\/@";
    int t=0,i=0;
    while (t<3)
    {
        i=0;
        char tmp;
        scanf("%c",&tmp);
        while (tmp!='\n')
        {
            if (tmp=='[')
                cin.getline(c[t][i++],5,']');

            scanf("%c",&tmp);
        }
        t++;
    }

    cin>>n;
    int x,y,z,a,b;
    for (int i = 0; i < n; ++i) {
        cin>>x>>y>>z>>a>>b;
        x-=1;y-=1;z-=1;a-=1;b-=1;
        if(strlen(c[0][x])&&strlen(c[1][y])&&strlen(c[2][z])&&strlen(c[1][a])&&strlen(c[0][b]))
            printf("%s(%s%s%s)%s\n",c[0][x],c[1][y],c[2][z],c[1][a],c[0][b]);
        else
            printf("%s\n",nu);
    }


    return 0;
}
/*
[\][/][o][~\][/~]  [<][>]
[/][\][^][-][=][>][<][@][O]
[A][V][_][E][^]  ...
4
1 1 2 2 2
6 8 1 5 5
3 3 4 3 3
2 10 3 9 3

*/