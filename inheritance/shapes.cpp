#include <iostream>
using namespace std;
class AREA
{
   public:
      float r;
      int area(float r)
      {
         return r*r*3.14;
      }
      int area(int s)
      {
         return s*s;
      }
      int area(int l, int b)
      {
         return 2*(l+b);
      }
};
