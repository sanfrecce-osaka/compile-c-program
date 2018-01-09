/* ©佐伯英子 http://saeki-ce.xsrv.jp/Cgengo.html */
//  円を表示する（アスキーアート）
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  main( )
{
    char    buf[25][80];                   // 25x48文字分の配列
    int     yc,xc,r;                       // 中心,半径
    int     y,x;                           // 画面の位置 縦,横
    double  th,dth;                        // 角度θ,増分
    char    c[128];

    printf("*** 円を表示（ＡＡ）***\n");

    printf("中心(縦)："); gets(c);         // 中心y 入力
    yc=atoi(c);

    printf("中心(横)："); gets(c);         // 中心x 入力
    xc=atoi(c);

    printf("半径："); gets(c);             // 半径 入力
    r=atoi(c);

    if ( r>0 ) dth=2.0/r; else dth=6.28;   // 増分計算

    memset(&buf[0][0],' ',24*80);          // 配列を空白で初期化

    for( th=0.0; th<6.28; th+=dth )        // θ=0.0～2πまで
      {
        x=r*2*cos(th)+xc;                  // 横方向は２倍
        y=r*sin(th)+yc;

        if ( x<0 || x>79 ) continue;       // 画面の範囲外
        if ( y<0 || y>23 ) continue;       // 画面の範囲外

        buf[y][x]='*';
      }

    for( y=23; y>=0; y-- )
      { printf("%.80s",&buf[y][0]); }      // 画面１行表示(自動改行)
    fflush(stdout);
}
