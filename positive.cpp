#include <iostream>
using namespace std;
int main()
{
   int i,num,sum=0;
   for (i=0;i<=10;i++)
      cout << "ENTER A POSITIVE NUMBER:" << endl;
      cin >> num;
      sum+=num;
   cout << "THE SUM OF POSITIVE NUMBERS IS " << sum << endl;
   return 0;
}
