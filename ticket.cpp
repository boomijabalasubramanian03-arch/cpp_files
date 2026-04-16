#include <iostream>
using namespace std;
class CPassenger
{
   private:
      string seatno;
      string name;
      string busname;
      string boarding;
   public:
      CPassenger();
      void getdetails();
      void display();
};

CPassenger::CPassenger()
{
   name = "BOOMI";
   seatno = "AD01";
   busname = "AD TRAVELS";
   boarding = "Chennai";
}
void CPassenger::getdetails()
{
   cout << "ENTER PASSENGER NAME : " << endl;
   cin >> name;
   cout << "ENTER SEAT NO:" << endl;
   cin >> seatno;
   cout << "ENTER BUS NAME:" << endl;
   cin >> busname;
   cout << " ENTER BOARDING PLACE:" << endl;
   cin >> boarding;
}
void CPassenger::display()
{
   cout << "THE PASSENGER DETAILS:" << endl;
   cout << "NAME : " << name << endl;
   cout << "SEATNO : " << seatno << endl;
   cout << "BUS NAME : " << busname << endl;
   cout << "BOARDING : " << boarding << endl;
}
int main()
{
   int i;
   CPassenger mem[3];
   for (i=0;i<2;i++)
   {
      cout << "ENTER NAME,SEATNO,BUS NAME,BOARDING DETAILS :" << endl;
      mem[i].getdetails();
   }
   for (i=0;i<2;i++)
   {
      cout << "DETAILS OF THE PASSENGER ARE :" << endl;
      mem[i].display();
   }
   return 0;
}
