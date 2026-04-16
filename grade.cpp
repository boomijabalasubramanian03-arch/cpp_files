#include <iostream>
using namespace std;
int main()
{
   int mark;
   cout << "ENTER THE MARK:" << endl;
   cin >> mark;
   if (mark>90 && mark<=100)
      cout << "GRADE A" << endl;
   else if (mark>80 && mark<=90)
      cout << "GRADE B" << endl;
   else if (mark>70 && mark<=80)
      cout << "GRADE C" << endl;
   else if (mark>60 && mark<=70)
      cout << "GRADE D" << endl;
   else if (mark<60)
      cout << "GRADE E" << endl;
   else
      cout << "GRADE NOT RECOGNISED" << endl;
}
