

#include "TXLib.h"

int main()
    {
    txCreateWindow (800, 600);

    txDisableAutoPause();
      int x = 400;
      int y = 300;
      int vy = 5;
      int vx = 5;
      int x1 = 400;
      int y1 = 300;
      while (!GetAsyncKeyState (VK_ESCAPE))
    {
      txClear();
      txSetColor(TX_WHITE,5);
      txSetFillColor(TX_BLACK);
      txCircle(400,y, 15);
      txCircle(x,300, 15);
      txCircle(x1,y1, 15);
      y = y + vy;
      x = x + vx;
      if (x>800 || x<0)
      {
            vx = - vx;
      }
      if (y>600 || y<0)
      {
            vy = - vy;
      }
      if (GetAsyncKeyState ('D'))
      {
            x1 = x1 + 10;
      }
      if (GetAsyncKeyState ('A'))
      {
            x1 = x1 - 10;
      }
      if (GetAsyncKeyState ('S'))
      {
            y1 = y1 + 10;
      }
      if (GetAsyncKeyState ('W'))
      {
            y1 = y1 - 10;
      }
      txSleep(10);
    }

    txTextCursor (false);
    return 0;
    }

