//
// Created by chenye on 2020/2/10.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node{
    int id,de,cai;
};
int cmp(node a,node b){
    if(a.de+a.cai !=b.de +b.cai )	return a.de+a.cai >b.de +b.cai;
    else	return a.de!=b.de ?a.de>b.de :a.id<b.id ;
}

int main(){
    int N,L,H,cnt=0;	cin>>N>>L>>H;
    vector<node> v[4];
    node tmp;
    for(int i=0;i<N;i++)
    {
        cin>>tmp.id >>tmp.de >>tmp.cai ;
        if(tmp.de >=H&&tmp.cai >=H){
            cnt++;
            v[0].push_back(tmp);	//德才全尽
        }
        if(tmp.de >=H&&tmp.cai >=L&&tmp.cai <H){
            cnt++;
            v[1].push_back(tmp) ;	//德胜才
        }
        if(tmp.de <H&&tmp.cai <H&&tmp.de >=L&&tmp.cai >=L&&tmp.de >=tmp.cai ){
            cnt++;
            v[2].push_back(tmp) ;//第三类
        }
        if(tmp.de <H&&tmp.de >=L&&tmp.cai >=L&&tmp.de <tmp.cai){	//第四类
            cnt++;
            v[3].push_back(tmp);
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<4;i++){
        sort(v[i].begin(),v[i].end(),cmp);
        for(int j=0;j<v[i].size();j++)
            printf("%d %d %d\n",v[i][j].id,v[i][j].de,v[i][j].cai);
    }
    return 0;
}