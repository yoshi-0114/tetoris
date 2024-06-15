//////////////////////////////////////////////////////////////////
//                                                              //
//  Win32用グラフィックス・初期化ライブラリー 1998/02/10        //
//                                                              //
//                         ver 1.36 (2003/12/10)                //
//                                                              //
//                         Copyright(C)1998-2003 Yamada,K       //
//////////////////////////////////////////////////////////////////
#ifndef WININIT_H
#define WININIT_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

extern int Color;
extern int Thickness;
extern int Style;

#define BLACK           0
#define BLUE            1
#define GREEN           2
#define CYAN            3
#define LIGHTCYAN       3
#define RED             4
#define MAGENTA         5
#define LIGHTMAGENTA    5
#define YELLOW          6
#define WHITE           7
#define DARKWHITE       8
#define DARKBLUE        9
#define DARKGREEN      10
#define DARKCYAN       11
#define DARKRED        12
#define DARKMAGENTA    13
#define DARKYELLOW     14
#define GRAY           15


int ginit(int = 640, int = 400, int = 0);
void gend();
void setcolor(int);
void pset(int,int,int = Color, int =R2_COPYPEN);
void pset(int,int,int [], int =R2_COPYPEN);
void pset(int,int,COLORREF, int =R2_COPYPEN);
bool getpixel(int , int , int [3]);
bool getpixel(int , int , COLORREF &);
void line(int,int,int,int,int = Color,int = Style,int = Thickness,
          int =R2_COPYPEN);
void textout(int,int,const char *,int = Color,double = 1.0,double = 1.0,
            int = 0, const char * = "ＭＳ 明朝");
void circle(int,int,int,int = Color,int = Style,int = Thickness,
            int =R2_COPYPEN);
void ellipse(int,int,int,int,int = Color,int = Style,int = Thickness,
             int =R2_COPYPEN);
void pie(int,int,int,int,int,int,int,int = Color,int = Style,int = Thickness,
         int =R2_COPYPEN);
void arc(int,int,int,int,int,int,int,int = Color,int = Style,int = Thickness,
         int =R2_COPYPEN);
void fpie(int,int,int,int,int,int,int,int = Color,
          int =R2_COPYPEN);
void rectangle(int,int,int,int,int = Color,int = Style,int = Thickness,
               int =R2_COPYPEN);
void paint(int,int,int,int, int =R2_COPYPEN);
void setlinestyle(int = 0, int = 0);
void view(int,int,int,int);
void cls(void);
void vcls(void);
void frectangle(int,int,int,int,int = Color, int =R2_COPYPEN);
int getstyle(void);
int getthickness(void);
void triangle(int,int,int,int,int,int,int = Color,int = Style,
              int = Thickness, int =R2_COPYPEN);
void ftriangle(int,int,int,int,int,int,int = Color, int =R2_COPYPEN);
void fcircle(int,int,int,int = Color, int =R2_COPYPEN);
void fellipse(int,int,int,int,int = Color, int =R2_COPYPEN);
int savebmp(const char * = "output.bmp");
int loadbmp(const char *, int =0, int =0);
void setcolor256(int ,int);
void setcolor256(int);
void setcolor256(const int (*)[3], int);
void setcolor256(const COLORREF [], int);
void delcolor256(void);
int key(void);
int vkey(void);
int wmouse(int &, int &);
int mouse(int &, int &);
int rgb2number(const int [3]);
bool number2rgb(int, int [3]);
int get_color_number16(int);
#endif
