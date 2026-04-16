#include "header.h"
float vol(int r1, int h)
{
   return r1*h;
}
float vol(float r)
{
   return (4*3.14*r*r*r)/3;
}
int vol(int a)
{
   return a*a*a;
}
