#include "header.h"
int main()
{
   int a,r1,h;
   float r;
   cout << "ENTER THE SIDE OF THE CUBE:" << endl;
   cin >> a;
   cout << "ENTER THE RADIUS OF THE SPHERE:" << endl;
   cin >> r;
   cout << "ENTER THE RADIUS OF THE CYLINDER:" << endl;
   cin >> r1;
   cout << "ENTER THE HEIGHT OF THE CYLINDER:" << endl;
   cin >> h;
   cout << "VOLUME OF THE CUBE IS " << vol(a) << endl;
   cout << "VOLUME OF THE SPHERE IS " << vol(r) << endl;
   cout << "VOLUME OF THE CYLINDER IS " << vol(r1,h) << endl;
   return 0;
}
