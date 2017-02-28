#include <stdio.h>
typedef struct
{ double y0,y1;} y0y1type;

typedef struct
{ float x,y;} xytype;

typedef struct
{ int win,cur;} wctype;

typedef struct
{ double x0,x1;} x0x1type;


#ifndef DOS



#endif
void output(double *s,double t);
void compressbuffer(int wid);
void numerics(double *c, double ddt);
