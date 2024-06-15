//////////////////////////////////////////////////////////////////////
//                                                                  //
//      Win32用 基本グラフィック・ライブラリ  GLIBW32 (1998.04.01)  //
//                                                                  //
//                         ver 1.36 (2003/12/10)                    //
//                                                                  //
//                          Copyright(c)1998-2003 Yamada,K          //
//////////////////////////////////////////////////////////////////////
#ifndef GLIBW32_H
#define GLIBW32_H

#include <math.h>
#include "wininit.h"

struct EYE_COORDINATES;


class GRAPH{
    public:
        GRAPH();
        GRAPH(double, double, double, double);
        GRAPH(const GRAPH &);
        ~GRAPH();
        const GRAPH &operator=(const GRAPH &);
        void view(int,int,int,int);
        void window(double,double,double,double);
        void setcolor(int);
        void setlinestyle(int = 0, int = 0);
        void setangle(double a) { angle = fmod(a,360.0); }
        void setmarkstyle(int, int);
        static int getcount() { return count; }
        double getx()  const { return LPX;}
        double gety()  const { return LPY;}
        void line(double,double,double,double, int = -1);
        void move(double, int = -1);
        void turn(double a) { angle=fmod(angle+a,360.0); }
        void moveto(double lpx,double lpy)  { LPX=lpx; LPY=lpy; }
        void moverel(double dx,double dy)  { LPX+=dx; LPY+=dy; }
        void linerel(double, double, int = -1);
        void lineto(double, double, int = -1);
        void pset(double, double,int = -1);
        void pset(double, double,int [3]);
        void pset(double, double,COLORREF);
        bool getpixel(double, double, int [3]);
        bool getpixel(double, double, COLORREF &);
        void circle(double,double,double, int = -1);
        void fcircle(double,double,double,int = -1);
        void ellipse(double,double,double,double, int = -1);
        void fellipse(double,double,double,double,int = -1);
        void pie(double, double, double, double,double,int = -1);
        void fpie(double, double, double, double,double,int = -1);
        void rectangle(double,double,double,double, int = -1);
        void frectangle(double, double,double, double, int = -1);
        void triangle(double,double,double,double,double,double, int = -1);
        void ftriangle(double,double,double,double,double,double,int = -1);
        void textout(double, double, const char *,
            int = -1, double = 1.0, double = 1.0, int = 0, const char* = 0);
        void paint(double, double, int, int);
        void cross(double,double,int = -1,int = -1);
        void box(double,double,int = -1, int = -1, int = -1);
        void disk(double,double,int = -1, int = -1, int = -1);
        void cls(void);
        void axis(double,double);
        void plot_func(double (*)(double), double = 0.01);
        void plot_func(double (*)(double, double), double = 0.1);
        void plot_func2(double (*)(double, double, double),
                        double , double, double = 1, double = 0.1);
        void runge_kutta(double &, double *, int, double,
                         void (*)(double, double *, double *));
        void rotate(double, double, double, double, double, double,
                    double &, double &, double &);
        void plot_deq(int, double, int,
                      double *, double &, double &, double,
                      void (*)(double, double *, double *));
        void plot_deq(int, double, int,
                      double *, double &, double,
                      void (*)(double, double *, double *));
        void eye(double = -1.0, double = 30.0, double = 60.0,
                 double = 0.0, double = 0.0, double = 0.0);
        void center(double, double, double);
        void perspective(double, double, double, double &, double &);
        void perspective(double, double, double, double &, double &, double &);
        void plot_func3(double (*)(double, double), double = 1.);
        void setrop(int = 0);
        int wmouse(double &, double &);
        int mouse(double &, double &);
        void arc(double, double, double, double,double,int = -1);

    private:
        double  WX1 ,WY1 ,WX2 ,WY2;
        int     VX1 ,VY1 ,VX2 ,VY2;
        double  FACTX ,FACTY;
        double  angle;
        double  LPX,LPY;
        static int count;
        static int ID;
        int id;
        int color;
        int style;
        int thickness;
        int marksize;
        int markfill;
        int rop;
        EYE_COORDINATES *Eye;
        int getwx(double x) const { return (int)((x-WX1)*FACTX + VX1);}
        int getwy(double y) const { return (int)((WY2-y)*FACTY + VY1);}
};

#endif
