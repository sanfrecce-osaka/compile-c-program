/* ©佐伯英子 http://saeki-ce.xsrv.jp/Cgengo.html */
#include <stdio.h>
#include <stdlib.h>
int  main( )
{
   char   buf[128];
   int    n;

   system("cls");// 画面消去

   printf("\n    |||||");
   printf("\n   ||･_･||");
   printf("\n   ||   ||");
   printf("\n     |||");
   printf("\n  ==m===w==////");
   printf("\n    |||||  ////");
   printf("\n   |||||||");
   printf("\n   |||||||");
   printf("\n  |||||||||");
   printf("\n ～～～～～～～");
   printf("\n ～～～～～～～");

   printf("\nあなたが落としたのは、金の斧ですか？");
   printf("\n銀の斧ですか？\nそれとも鉄の斧ですか？");
   printf("\n金の斧なら 1 を、\n銀の斧なら 2 を、");
   printf("\n鉄の斧なら 3 を\n入力しなさい：");
   gets(buf);
   n=atoi(buf);

   system("cls");// 画面消去

   if ( n==1 )
     {
       printf("\n");
       printf("\n");
       printf("\n");
       printf("\n");
       printf("\n");
       printf("\n");
       printf("\n    |||||");
       printf("\n。 ||･_･||   。");
       printf("\n 。||   ||  。。");
       printf("\n ～～～～～～～");
       printf("\n ～～～～～～～");
       printf("\n うそはいけませんねぇ。");
     }
   else if ( n==2 )
     {
       printf("\n");
       printf("\n");
       printf("\n");
       printf("\n");
       printf("\n    |||||");
       printf("\n   ||･_･||");
       printf("\n。 ||   || 。。");
       printf("\n 。  |||    。");
       printf("\n  ==m===w==////");
       printf("\n ～～～～～～～");
       printf("\n ～～～～～～～");
       printf("\n え、銀ですか？");
       printf("\n うそを言うなら金でしょう。");
     }
   else if ( n==3 )
     {
       printf("\n    |||||");
       printf("\n   ||･_･||      +");
       printf("\n   ||   ||   + ☆");
       printf("\n  ==m===w==//// +");
       printf("\n     |||   ////");
       printf("\n    |||||");
       printf("\n   |||||||");
       printf("\n   |||||||");
       printf("\n  |||||||||");
       printf("\n ～～～～～～～");
       printf("\n ～～～～～～～");
       printf("\n 正直者。");
       printf("\n あなたにはこの金の斧をあげましょう。");
     }
   printf("\n");
}
