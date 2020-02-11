//
// Created by chenye on 2020/2/9.
//

#include <stdio.h>

int main() {
    int i,n,flag=1;
    int position=0,countleft=0,countmid=0,countright=0,countp=0,countt=0;//countt countp is necessary
    scanf("%d",&n);
    getchar();//enter
    char tmp;
    for (i = 0; i < n; ++i) {
        for(;tmp=getchar(),tmp!='\n';)
        {
            if(position==0)//P left
            {
                if (tmp=='A')
                    countleft++;
                else if (tmp=='P')
                {position=1;countp++;}
                else
                {while(getchar()!='\n');flag=0;break;}
            }
            else if (position==1)//P T mid
            {
                if (tmp=='A')
                    countmid++;//countmid must >= 1
                else if (tmp=='T')
                {position=2;countt++;}
                else
                {while(getchar()!='\n');flag=0;break;}
            }
            else//T right
            {
                if (tmp=='A')
                    countright++;
                else
                {while(getchar()!='\n');flag=0;break;}

            }
        }
        // judge
        printf((flag&&countmid!=0&&countleft*countmid==countright&&countp==1&&countt==1)?"YES\n":"NO\n");

        flag=1;position=0;countleft=0;countmid=0;countright=0;countp=0;countt=0;
    }

    return 0;
}
