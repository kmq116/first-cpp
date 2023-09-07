#include <stdio.h>
#include <iostream>
using namespace std;

class myDate
{
public:
  myDate();
  myDate(int);
  myDate(int, int);
  myDate(int, int, int);

  // private:
  int year, month, day;
};
myDate::myDate()
{
  year = 1970;
  month = 2;
  day = 14;
}
myDate::myDate(int d) : year(1970), month(1)
{
  day = d;
}

myDate::myDate(int m, int d) : year(1970)
{
  month = m;
  day = d;
}

myDate::myDate(int y, int m, int d)
{
  year = y;
  month = m;
  day = d;
}
main()
{
  // myDate myD(10, 20, 30);
  myDate myD;
  // myDate myD(10);
  cout << myD.day << "\n"
       << myD.month << "\n"
       << myD.year << "\n"
       << endl;
}