#include <iostream>
using namespace std;
class Vehicle
{
   public:
      Vehicle()
      {
         cout << "THIS IS A VEHICLE " << endl;
      }
};
class Fourwheeler
{
   public:
      Fourwheeler()
      {
         cout << "THIS IS A FOURWHEELER " << endl;
      }
};
class Car:public Vehicle,public Fourwheeler
{
   public:
      Car()
      {
         cout << "THIS IS A CAR " << endl;
      }
};
int main()
{
   Car obj;
   return 0;
}
