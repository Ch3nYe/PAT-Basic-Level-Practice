//
// Created by chenye on 2020/2/19.
//

#include <iostream>
using namespace std;
int main() {
    int T,K,n1,n2,b,t;
    cin>>T>>K;
    for (int i = 0; i < K; ++i) {
        cin>>n1>>b>>t>>n2;
        if (T<t)
        {
            printf("Not enough tokens.  Total = %d.\n",T);
            continue;
        }
        if ((n1>n2&&b==0) || (n1<n2&&b==1))
        {
            T += t;
            printf("Win %d!  Total = %d.\n",t,T);
        } else {
            T -= t;
            printf("Lose %d.  Total = %d.\n",t,T);
            if (T==0)
            {
                printf("Game Over.\n");
                break;
            }
        }

    }
    return 0;
}
