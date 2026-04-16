#include <iostream>
using namespace std;
class Person
{
   public:
      Person()
      {
         cout << "THIS IS PARENT CLASS" << endl;
      }
};
class Employee:public Student
{
   public:
      Employee()
      {
         cout << "THIS IS FIRST DERIVED CLASS " << endl;
      }
};
class Student:public Employee
{
   public:
      Student()
      {
         cout << " THIS IS SECOND DERIVED CLASS" << endl;
      }
};
int main()
{
   Student obj;
   return 0;
}
