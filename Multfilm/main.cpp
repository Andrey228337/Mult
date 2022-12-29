
#include "TXLib.h"

void drawSky()
{
    //небо
    txSetColor(TX_BLUE);
    txSetFillColor(TX_BLUE);
    txRectangle(0,0,1200,500);
}

void drawLand()
{
    //земля
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    txRectangle(0,500,1200,800);
}

void drawSun(int x,int y)
{
    //солнце x=90,y=80
txSetColor(TX_YELLOW);
txSetFillColor(TX_YELLOW);
txCircle(x,y,50);
}

void drawHouse()
{
    //хата
txSetColor(TX_BLACK);
txSetFillColor(TX_BROWN);
txRectangle(750,330,1190,560);
//дверь
txSetColor(TX_BLACK);
txSetFillColor(TX_GREY);
txRectangle(1070,400,1130,560);
txSetColor(TX_BLACK);
txLine(1110,500,1125,500);
//окно
txSetColor(TX_BLACK);
txSetFillColor(TX_CYAN);
txRectangle(810,380,960,460);
txLine(810,420,960,420);
txLine(885,380,885,460);
//крыша
txSetColor(TX_BLACK);
txSetFillColor(TX_BROWN);
POINT start[3]{{750,330}, {1190,330}, {970,200}};
txPolygon (start, 3);
}

void drawMan(int x,int y, float razm, int yHand)
{
   //человек X=570   y=365
    txSetFillColor(TX_BLACK);
    txSetColor(TX_BLACK, 10);
    txCircle(x,y,15*razm);
    txLine  (x-30*razm, y+195*razm, x, y+85*razm);
    txLine  (x+20*razm, y+195*razm, x, y+85*razm);
    txLine  (x,         y+85*razm,  x, y+15*razm);
    txLine  (x+40*razm, y+75*razm,  x, y+15*razm);

    txLine  (x-40*razm, (y+75*razm)-yHand,  x, y+15*razm);
}

void drawCar(int x, int y, float razm)
{
  //машина x=160 y=480
txSetColor(TX_BLACK);
txSetFillColor(TX_GREY);
POINT car[7]{{x+160-160,y+530-480}, {x+160-160,y+480-480}, {x+210-160,y+450-480}, {x+240-160,y+390-480}, {x+430-160,y+390-480}, {x+470-160,y+450-480}, {x+470-160,y+530-480}};
txPolygon (car, 7);
//окно машины
txSetColor(TX_BLACK);
txSetFillColor(TX_CYAN);
POINT window[4]={{x+(410-160)*razm,y+(400-480)*razm}, {x+(440-160)*razm,y+(450-480)*razm}, {x+(230-160)*razm,y+(450-480)*razm}, {x+(250-160)*razm,y+(400-480)*razm}};
txPolygon (window, 4);
//двери
txLine(x+(330-160)*razm,y+(400-480)*razm,x+(330-160)*razm,y+(530-480)*razm);
txLine(x+(260-160)*razm,y+(470-480)*razm,x+(280-160)*razm,y+(490-480)*razm);
txLine(x+(350-160)*razm,y+(470-480)*razm,x+(370-160)*razm,y+(490-480)*razm);
//калёса
txSetColor(TX_BLACK);
txSetFillColor(TX_BLACK);
txCircle(x+(200-160)*razm,y+(530-480)*razm,30);
txCircle(x+(420-160)*razm,y+(530-480)*razm,30);
txSetFillColor(TX_GREY);
txCircle(x+(200-160)*razm,y+(530-480)*razm,20);
txCircle(x+(420-160)*razm,y+(530-480)*razm,20);
//выхлоп
txLine(x+(470-160)*razm,y+(520-480)*razm,x+(475-160)*razm,y+(520-480)*razm);
txLine(x+(470-160)*razm,y+(521-480)*razm,x+(475-160)*razm,y+(521-480)*razm);
txLine(x+(470-160)*razm,y+(522-480)*razm,x+(475-160)*razm,y+(522-480)*razm);
txLine(x+(470-160)*razm,y+(523-480)*razm,x+(475-160)*razm,y+(523-480)*razm);
//фары
txSetColor(TX_BLACK);
txSetFillColor(TX_YELLOW);
POINT fari[3]{{x+160-160,y+500-480}, {x+170-160,y+470-480}, {x+160-160,y+480-480}};
txPolygon (fari, 3);
}

void drawLocation2()
{
    //песок
txSetColor(TX_YELLOW);
txSetFillColor(TX_YELLOW);
txRectangle(0,470,1200,800);

  //море
txSetColor(TX_CYAN);
txSetFillColor(TX_CYAN);
txRectangle(0,340,1200,470);
txSetColor(TX_LIGHTBLUE);
txSetFillColor(TX_LIGHTBLUE);
txLine(70,380,170,380);
txSetColor(TX_LIGHTBLUE);
txSetFillColor(TX_LIGHTBLUE);
txLine(250,440,350,440);
txSetColor(TX_LIGHTBLUE);
txSetFillColor(TX_LIGHTBLUE);
txLine(510,380,610,380);
txSetColor(TX_LIGHTBLUE);
txSetFillColor(TX_LIGHTBLUE);
txLine(850,430,950,430);
txSetColor(TX_LIGHTBLUE);
txSetFillColor(TX_LIGHTBLUE);
txLine(930,370,1030,370);

//небо
txSetColor(TX_BLUE);
txSetFillColor(TX_BLUE);
txRectangle(0,0,1200,340);
}

 void drawLocation3()

 {
 //песок
txSetColor(TX_YELLOW);
txSetFillColor(TX_YELLOW);
txRectangle(0,450,1200,800);
//вода
txSetColor(TX_CYAN);
txSetFillColor(TX_CYAN);
txRectangle(0,0,1200,450);
 }

 void drawArrow(int x, int y)
  {
    //стрела
    // x=320 y=670
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    POINT star[4] = {{x+320-320, y+670-670}, {x+350-320, y+660-670}, {x+340-320, y+670-670}, {x+350-320, y+680-670}};
    txPolygon (star, 4);
    txSetColor(TX_BROWN);
    txSetFillColor(TX_BROWN);
    txLine(x,y,x+420-320,y);

           }
int xArrow=320;
    int yArrow=670;

 void drawStart(int x, int y)
   {
    // x=400  y=400
    //начало
    txSetColor(TX_WHITE);
    txSetFillColor(TX_BLACK);
    txSelectFont("Times New Roman", 50);
    txDrawText(x,y,x+800-400,y+500-400,"Пробуждение Стенда");
   }

   void drawArrow2(int x, int y)
   {
   // x =540  y = 580
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    POINT star[4] = {{x, y}, {x+510-540, y+570-580}, {x+520-540, y}, {x+510-540, y+590-580}};
    txPolygon (star, 4);
    txSetColor(TX_BROWN);
    txSetFillColor(TX_BROWN);
    txLine(x+520-540,y,x+420-540,y);
    }


     void drawLight(int x, int y, float razm)
    {
      //x=700 y=450
    txSetColor(TX_PINK);
    txSetFillColor(TX_PINK);
    txCircle(x,y,razm);
    }

    void drawEnd(int x, int y)


   {
    // x=400  y=400
    //начало
    txSetColor(TX_WHITE);
    txSetFillColor(TX_BLACK);
    txSelectFont("Arial ", 50);

    txDrawText(x,y,x+400,y+500,"Конец\n"
                                "Участники\n"
                                "Cтикман\n"
                                "Создатель\n"
                                "Я");


   }

   void drawText()
   {
   txSetColor(TX_BLACK);
   txSetFillColor(TX_WHITE);
   txSelectFont("Arial" ,30);
   txEllipse(350,300,600,350);
   txDrawText(350,300,600,350, "Чимимими");

   }



int main()
{
txCreateWindow (1200, 800);

    int xSun = 90;
    int ySun = 80;
    int xMan = 570;
    int yMan = 365;
    float razmMan = 1;
    int xCar = 160;
    int yCar = 480;
    int xStart= 400;
    int yStart = 400;
    float razmCar = 1;
    int xArrow = 320;
    int yArrow = 670;
    int yHand = 0;
    int xArrow2 = 480;
    int yArrow2 = 670;
    int xLight = 700;
    int yLight = 450;
    float razmLight = 0;
    int xEnd = 400;
    int yEnd = 800;
    HDC Tusk = txLoadImage ("Tusk.bmp");


while(yStart > -100)

    {
        txBegin();
        txSetColor(TX_BLACK);
        txSetFillColor(TX_BLACK);
        txRectangle(0,0,1200,800);
        drawStart(xStart, yStart);

        yStart-=10;
        txEnd();
        txSleep(10);

     }

    while(xSun < 560)
    {
        txBegin();
        drawSky();
        drawLand();
        drawSun(xSun,ySun);
        drawHouse();
        drawMan(xMan,yMan, razmMan, 0);
        drawCar(xCar,yCar,razmCar);
        xSun+=5;
        ySun-=1;
        txEnd();
        txSleep(10);
    }



    while(xSun < 1400)
    {
        txBegin();
        drawSky();
        drawLand();
        drawSun(xSun,ySun);
        drawHouse();
        drawMan(xMan,yMan, razmMan, 0);
        drawCar(xCar,yCar,razmCar);
        xSun+=5;
        ySun+=1;
        txEnd();
        txSleep(10);
    }

    while(xMan > 320)
    {
        txBegin();
        drawSky();
        drawLand();
        drawSun(xSun,ySun);
        drawHouse();
        drawCar(xCar,yCar,razmCar);
        drawMan(xMan,yMan, razmMan, 0);
        xMan-=5;
        txEnd();
        txSleep(10);
    }

    while(xCar > -320)
    {
        txBegin();
        drawSky();
        drawLand();
        drawSun(xSun,ySun);
        drawHouse();
        drawCar(xCar,yCar,razmCar);
        xCar-=5;
        txEnd();
        txSleep(10);
    }

    xCar=1500;
    while(xCar > 600)
    {
        txBegin();
        drawLocation2();
        drawSun(xSun,ySun);
        drawCar(xCar,yCar,razmCar);
        xCar-=5;
        txEnd();
        txSleep(10);
    }

    xMan=xCar+100;
    while(xMan > 500)
    {
        txBegin();
        drawLocation2();
        drawSun(xSun,ySun);
        drawCar(xCar,yCar,razmCar);
        drawMan(xMan,yMan,razmMan, 0);
        xMan-=5;
        txEnd();
        txSleep(10);
    }

    while(razmMan > 0.25)
    {
        txBegin();
        drawLocation2();
        drawSun(xSun,ySun);
        drawCar(xCar,yCar,razmCar);
        drawMan(xMan,yMan,razmMan, 0);
        razmMan-=0.01;
        yMan+=0.8;
        txEnd();
        txSleep(10);
    }


    yMan = 0;
   razmMan=-1;
   while (yMan < 500)
   {
       txBegin();
       drawLocation3();
       drawMan(xMan,yMan,razmMan, 0);
       yMan+=10;
       drawArrow(xArrow,yArrow);
       txEnd();
       txSleep(10);
   }


   razmMan=+1;

   while(yMan < 510)
   {
       txBegin();
       drawLocation3();
       drawMan(xMan,yMan,razmMan, 0);
       drawArrow(xArrow,yArrow);
       yMan+=10;
       txEnd();
       txSleep(10);

    }

   while(yMan < 590)
   {
       txBegin();
       drawLocation3();
       drawMan(xMan,yMan,razmMan, 0);
       drawArrow(xArrow,yArrow);
       yMan+=10;
       txEnd();
       txSleep(10);

    }

    while(xArrow < 440)
   {
       txBegin();
       drawLocation3();
       drawMan(xMan,yMan,razmMan, 0);
       drawArrow(xArrow,yArrow);
       xArrow+=10;
       txEnd();
       txSleep(10);

    }

    while(yHand < 100)
   {
       txBegin();
       drawLocation3();
       drawMan(xMan,yMan,razmMan, yHand);
       drawArrow(xArrow,yArrow-yHand);
       yHand+=10;

       txEnd();
       txSleep(10);

    }

   while(yHand > 0)
   {
       txBegin();
       drawLocation3();
       drawMan(xMan,yMan,razmMan, yHand);
       drawArrow2(xArrow2,yArrow2-yHand);
       yHand-=10;
       txEnd();
       txSleep(10);

    }


while(xArrow2 < 500)
   {
       txBegin();
       drawLocation3();
       drawMan(xMan,yMan,razmMan, yHand);
       drawArrow2(xArrow2,yArrow2);
       xArrow2+=3;
       txEnd();
       txSleep(10);

    }

    while(razmLight < 400 )
   {
       txBegin();
       drawLocation3();
       drawLight(xMan,yMan,razmLight);
       razmLight+=15;
       txEnd();
       txSleep(10);

    }

    drawLocation3();
    drawText();
    txTransparentBlt (txDC(), 480, 330, 250, 340, Tusk, 0, 0, TX_WHITE);
    txSleep(5000);

    while(yEnd > -300)
        {
         txBegin();
         txSetColor(TX_BLACK);
         txSetFillColor(TX_BLACK);
         txRectangle(0,0,1200,800);
         drawEnd(xEnd, yEnd);
         yEnd-=5;

         txEnd();
         txSleep(10);
        }

txDeleteDC (Tusk);








txTextCursor (false);
return 0;
}

