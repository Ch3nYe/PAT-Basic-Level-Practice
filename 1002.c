//
// Created by chenye on 2020/2/9.
//

#include <stdio.h>
#include <string.h>
void   itoa   (   unsigned   long   val,   char   *buf,   unsigned   radix   )
{
    char   *p;                                 /*   pointer   to   traverse   string   */
    char   *firstdig;                   /*   pointer   to   first   digit   */
    char   temp;                             /*   temp   char   */
    unsigned   digval;                 /*   value   of   digit   */

    p   =   buf;
    firstdig   =   p;                       /*   save   pointer   to   first   digit   */

    do   {
        digval   =   (unsigned)   (val   %   radix);
        val   /=   radix;               /*   get   next   digit   */

        /*   convert   to   ascii   and   store   */
        if   (digval   >   9)
            *p++   =   (char   )   (digval   -   10   +   'a');     /*   a   letter   */
        else
            *p++   =   (char   )   (digval   +   '0');               /*   a   digit   */
    }   while   (val   >   0);

    /*   We   now   have   the   digit   of   the   number   in   the   buffer,   but   in   reverse
          order.     Thus   we   reverse   them   now.   */

    *p--   =   '\0';                         /*   terminate   string;   p   points   to   last   digit   */

    do   {
        temp   =   *p;
        *p   =   *firstdig;
        *firstdig   =   temp;       /*   swap   *p   and   *firstdig   */
        --p;
        ++firstdig;                   /*   advance   to   next   two   digits   */
    }   while   (firstdig   <   p);   /*   repeat   until   halfway   */
}

int main() {
    char s[1000];
    scanf("%s",s);
    int i=0;
    int sum=0;
    for(;i<strlen(s);i++)
    {
        sum+=s[i]-'0';
    }
    char out[10][10]={"ling","yi","er","san","si"
                      ,"wu","liu","qi","ba","jiu"};
    char sumstring[10];
    itoa(sum,sumstring,10);
    for(i=0;i<strlen(sumstring);i++)
    {
        printf("%s ",out[sumstring[i]-'0']);
    }
    //printf("\n");
    return 0;
}
