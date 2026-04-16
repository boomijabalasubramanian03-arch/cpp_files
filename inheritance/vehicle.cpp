#include <iostream>
using namespace std;
class Vehicle
{
   public:
      Vehicle()
      {
         cout << "THIS IS A BASE CLASS" << endl;

      }
};
class Car:public Vehicle
{
   public:
      Car()
      {
         cout << "THIS IS A DERIVED CLASS" << endl;
      }
};
int main()
{
   Car obj;
   return 0;
}
