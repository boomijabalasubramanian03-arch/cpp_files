#include <iostream>
using namespace std;
class Addition
{
   public:
      void add(int x,int y)
      {
         int sum;
         sum = x+y;
         cout << " ADDITION ANSWER IS :" << sum << endl;
      }
      void add(int x,double y)
      {
         double sum;
         sum = x+y;
         cout << " ADDITION VALUE IS :" << sum << endl;
      }
      void add(float g,float u)
      {
         float sum;
         sum = g+u;
         cout << "THE ADDITION VALUE IS :" << sum << endl;
      }
};
int main()
{
   Addition obj1,obj2,obj3;
   int n1,n2;
   cout << "ENTER TWO NUMBERS:" << endl;
   cin >> n1;
   cin >> n2;
   obj1.add(n1,n2);
   return 0;
}
