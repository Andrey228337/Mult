#include "TXLib.h"

    int main()
    {
    txCreateWindow (800, 600);

    HDC  background = txLoadImage ("XXX.bmp");
    HDC  spaceman = txLoadImage ("XXXX.bmp");
    int xSpaceman = 300;
    int ySpaceman = 200;
        while(!GetAsyncKeyState (VK_ESCAPE))
    {
        txBegin();
        txSetColor (TX_WHITE);
        txSetFillColor(TX_BLACK);
        txBitBlt (txDC(), 0, 0, 800, 600, background);
        txTransparentBlt (txDC(), xSpaceman, ySpaceman, 138, 209, spaceman, 0 , 0, TX_BLACK);

        if(GetAsyncKeyState('W'))
        {
         ySpaceman -=10;

        }
        if(GetAsyncKeyState('S'))
        {
         ySpaceman +=10;

        }
        if(GetAsyncKeyState('D'))
        {
         xSpaceman +=10;

        }
        if(GetAsyncKeyState('A'))
        {
         xSpaceman -=10;

        }






        txEnd();
        txSleep(10);
    }

    txDeleteDC (background);
    txDeleteDC (spaceman);

    txTextCursor (false);
    return 0;
    }

