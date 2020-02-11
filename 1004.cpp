//
// Created by chenye on 2020/2/9.
//

#include <stdio.h>
#include <algorithm>


typedef struct
{
    char name[11];
    char num[11];
    int sc;
}student;

int compare(student s1,student s2)
{
    return s1.sc > s2.sc;
}

int main() {
    int n,i;
    scanf("%d",&n);
    i=n;
    student stu[n];
    while(i--)
    {
        scanf("%s %s %d",stu[i].name,stu[i].num,&stu[i].sc);
    }
    std::sort(stu,stu+n,compare);
    printf("%s %s\n",stu[0].name,stu[0].num);
    printf("%s %s\n",stu[n-1].name,stu[n-1].num);
    return 0;
}
