#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect* rect1, Rect* rect2){
 double x1 = rect1->x;
 double y1 = rect1->y;
 double w1 = rect1->w;
 double h1 = rect1->h;
 
 double x2 = rect2->x;
 double y2 = rect2->y;
 double w2 = rect2->w;
 double h2 = rect2->h;
 double xx,xxw,yy,yyh,xl,yl;
 if(x1 > x2 or x1 == x2){
    xx = x1;
}else{
    xx = x2;
}
 if(x1 + w1 < x2 + w2 or x1 + w1 == x2 + w2){
    xxw = x1+w1 ;
}else{
   xxw = x2+w2;
}
if(xxw < xx){
    return 0;
}else{
    xl = xxw - xx;
}


if(y1 < y2 or y1 == y2){
    yy = y1;
}else{
    yy = y2;
}
 if(y1 - h1 > y2 - h2 or y1 - h1 == y2 - h2){
    yyh = y1-h1 ;
}else{
    yyh = y2-h2;
}
if(yyh > yy){
    return 0;
}else{
    yl = yy-yyh;
}
return yl*xl;
}