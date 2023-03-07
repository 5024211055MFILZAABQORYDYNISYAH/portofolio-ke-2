 #include<graphics.h>
 #include<stdio.h>
 #include<stdlib.h>
 #include<conio.h>
 #include<windows.h>
 #include<time.h>
 #include<MMsystem.h>

 DWORD maxX = GetSystemMetrics(SM_CXSCREEN);
 DWORD maxY = GetSystemMetrics(SM_CXSCREEN);

void Loading ()
{
    setcolor (GREEN);
    rectangle (150, 349, 1315,405);

    setcolor(LIGHTGRAY);
    settextstyle (4,0,6);
    outtextxy (125,50, "LOADING IRON-BLYAT");

    setcolor(LIGHTCYAN);
    settextstyle (2,0,10);
    outtextxy (125,500, "MISSION  : PROTECT MOTHERLAND FROM INCOMING F-22 !");
    outtextxy (125,600, "CONTROL : USE MOUSE TO MOVE, AND LEFT CLICK TO SHOOT THE BULLET");
    outtextxy (125,700, "GOOD LUCK COMRADE !");

    for(int i=0;i<1160;i+=3) {
        setcolor (RED);
        delay(2);
        rectangle(150+i,350,150+i,404);
        if(i==1150) {
        cleardevice();
        }
    }
}

void Screen()
{
        setcolor(GREEN);
        setfillstyle(SOLID_FILL,BLACK);
        rectangle(0,100,1920,880);
        floodfill(1,1,GREEN);
        setcolor(LIGHTGRAY);
        settextstyle(2,0,10);
        outtextxy(820,80, "IRON-BLYAT");
}

void PeaShooter (int x, int y, float s, int *a, int *b)
{
    *a=0.5*s+x;
    *b=3*s+y;
    setfillstyle(SOLID_FILL,YELLOW);
    circle(*a,*b,5);
    floodfill(*a+1,*b+1,YELLOW);
}

void DassaultRafale (int x, int y, float s)
{
    line(0*s+x,-10*s+y,0*s+x,-9*s+y);
    line(0*s+x,-9*s+y,0.5*s+x,-8*s+y);
    line(0.5*s+x,-8*s+y,1*s+x,-7*s+y);
    line(1*s+x,-7*s+y,1*s+x,-6*s+y);
    line(1*s+x,-6*s+y,2*s+x,-5.5*s+y);
    line(2*s+x,-5.5*s+y,2*s+x,-4.5*s+y);
    line(2*s+x,-4.5*s+y,1.5*s+x,-5*s+y);
    line(1.5*s+x,-5*s+y,1.5*s+x,-4*s+y);
    line(1.5*s+x,-4*s+y,6*s+x,0*s+y);
    line(6*s+x,0*s+y,6*s+x,-1.5*s+y);
    line(6*s+x,-1.5*s+y,6*s+x,2*s+y);
    line(6*s+x,2*s+y,2*s+x,3*s+y);
    line(2*s+x,3*s+y,1.5*s+x,4*s+y);
    line(1.5*s+x,4*s+y,0*s+x,4*s+y);
    line(0*s+x,4*s+y,0*s+x,5*s+y);
    line(0*s+x,5*s+y,0*s+x,3*s+y);

    line(0*s+x,-10*s+y,0*s+x,-9*s+y);
    line(0*s+x,-9*s+y,-0.5*s+x,-8*s+y);
    line(-0.5*s+x,-8*s+y,-1*s+x,-7*s+y);
    line(-1*s+x,-7*s+y,-1*s+x,-6*s+y);
    line(-1*s+x,-6*s+y,-2*s+x,-5.5*s+y);
    line(-2*s+x,-5.5*s+y,-2*s+x,-4.5*s+y);
    line(-2*s+x,-4.5*s+y,-1.5*s+x,-5*s+y);
    line(-1.5*s+x,-5*s+y,-1.5*s+x,-4*s+y);
    line(-1.5*s+x,-4*s+y,-6*s+x,0*s+y);
    line(-6*s+x,0*s+y,-6*s+x,-1.5*s+y);
    line(-6*s+x,-1.5*s+y,-6*s+x,2*s+y);
    line(-6*s+x,2*s+y,-2*s+x,3*s+y);
    line(-2*s+x,3*s+y,-1.5*s+x,4*s+y);
    line(-1.5*s+x,4*s+y,0*s+x,4*s+y);
}

void F22(int x, int y, float s)
{

    line(0*s+x,8*s+y,0.5*s+x,7*s+y);
    line(0.5*s+x,7*s+y,1*s+x,5*s+y);
    line(1*s+x,5*s+y,1*s+x,4*s+y);
    line(1*s+x,4*s+y,1.5*s+x,3*s+y);
    line(1.5*s+x,3*s+y,1.5*s+x,2*s+y);
    line(1.5*s+x,2*s+y,4*s+x,-1*s+y); //SAYAP KANAN
    line(4*s+x,-1*s+y,4*s+x,-2*s+y);
    line(4*s+x,-2*s+y,3*s+x,-2.5*s+y);
    line(3*s+x,-2.5*s+y,1.5*s+x,-3*s+y);
    line(1.5*s+x,-3*s+y,3*s+x,-4*s+y);
    line(3*s+x,-4*s+y,3*s+x,-5*s+y);
    line(3*s+x,-5*s+y,2*s+x,-5.5*s+y);
    line(2*s+x,-5.5*s+y,1*s+x,-5*s+y);
    line(1*s+x,-5*s+y,0*s+x,-5*s+y);

    line(0*s+x,8*s+y,-0.5*s+x,7*s+y);
    line(-0.5*s+x,7*s+y,-1*s+x,5*s+y);
    line(-1*s+x,5*s+y,-1*s+x,4*s+y);
    line(-1*s+x,4*s+y,-1.5*s+x,3*s+y);
    line(-1.5*s+x,3*s+y,-1.5*s+x,2*s+y);
    line(1*s+x,-3*s+y,1*s+x,-6*s+y);
    line(0*s+x,7*s+y,0.4*s+x,6.5*s+y);
    line(0.4*s+x,6.5*s+y,0.5*s+x,5.5*s+y);
    line(0.5*s+x,5.5*s+y,0*s+x,5*s+y);
    line(-1.5*s+x,2*s+y,-4*s+x,-1*s+y);  //SAYAP KIRI
    line(-4*s+x,-1*s+y,-4*s+x,-2*s+y);
    line(-4*s+x,-2*s+y,-3*s+x,-2.5*s+y);
    line(-3*s+x,-2.5*s+y,-1.5*s+x,-3*s+y);
    line(-1.5*s+x,-3*s+y,-3*s+x,-4*s+y);
    line(-3*s+x,-4*s+y,-3*s+x,-5*s+y);
    line(-3*s+x,-5*s+y,-2*s+x,-5.5*s+y);
    line(-2*s+x,-5.5*s+y,-1*s+x,-5*s+y);
    line(-1*s+x,-5*s+y,0*s+x,-5*s+y);
    line(-1*s+x,-3*s+y,-1*s+x,-6*s+y);
    line(0*s+x,7*s+y,-0.4*s+x,6.5*s+y);
    line(-0.4*s+x,6.5*s+y,-0.5*s+x,5.5*s+y);
    line(-0.5*s+x,5.5*s+y,0*s+x,5*s+y);
}

int main()
 {

     int zero=0;
     int x=900,y=50, scPS=5;
     int xx,yy,i;
     int f,xp,yp=950;
     int a, b, c, d, u, z;
     int page=0;
     int mv=5;
     char temp[1];
     float s=12;
     f=0;
    initwindow(maxX,maxX);//Inisialisasi Layar Grafik

    Loading();
    //PlaySound(TEXT("IronBlood.wav"),NULL, SND_ASYNC);
   while (!kbhit())

   {
        //Set Up Enemy
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();

        setcolor(LIGHTRED);
        F22(x,y,s);

        Screen();
        settextstyle(2,0,10);
        outtextxy(60,20, "SCORE :");
        sprintf(temp,"%d",zero);
        outtextxy(250,20,temp);

        y=y+mv;

        xx=mousex();
        yy=mousey();
        setcolor(LIGHTCYAN);
        DassaultRafale(xx,950,5);

        //Tembak Peluru/PeaShooter
       if (f==1)
       {
            yp=yp-25;
            setcolor(YELLOW);
            PeaShooter(xp,yp,scPS, &a, &b);

            if((xp>=-4*s+x && xp<4*s+x) && (yp>=-1*s+y && yp<7*s+y) ||
               (xp>=-4*s+x && xp<-1.5*s+x) && (yp>=-1*s+y && yp<2*s+y) )
            {
                zero++;
                z=7+rand()%10; //Randomizer Movement F22
                mv=z;
                f=0;

                u=120+rand()%1750;//Randomizer Location F22
                x=u;
                y=-100;
                F22(x,y,s);
            }
       }
       if (ismouseclick(WM_LBUTTONDOWN))
       {
           f=1;
           xp=xx;
           yp=950;
           clearmouseclick(WM_LBUTTONDOWN);
       }

    if(y>=850)
        {
            break;
        }



    page=1-page;
    delay(10);
   }


   closegraph();//Menutup Grafik
 }
