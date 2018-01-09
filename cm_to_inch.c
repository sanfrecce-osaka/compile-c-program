/* ©佐伯英子 http://saeki-ce.xsrv.jp/Cgengo.html */
#include <stdio.h>
#include <stdlib.h>

void  main( )
{
    char    c[128];
    double  lc,li;

    printf("\n***** 長さの単位変換 *****");
    printf("\n（アンチメートル→インチ）");
    printf("\n\n長さ(cm)： "); fflush(stdout);

    gets(c); lc=atof(c);                 // 文字列入力，数値に変換

    li=lc/2.54;

    printf("\n  %f cm → %f インチ\n",lc,li);
}
