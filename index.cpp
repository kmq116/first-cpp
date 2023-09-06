#include <stdio.h>

#include <iostream>
using namespace std;

class Box
{
public:
  double length;
  void setWidth(double wid);
  double getWidth();

private:
  double width;
};

double Box::getWidth()
{
  return width;
}

void Box::setWidth(double wid)
{
  width = wid;
}

main()
{

  Box box;
  box.length = 10;
  box.setWidth(11.0);
  cout << "width of box \n"
       << box.getWidth() << endl;
  cout << "Hello, world!" << endl;

  int a = 1;
  cout << a << "\n";
  for (int i = 1; i < 2; i++)
  {
    int a = 2;
    cout << a << "\n";
  }

  return 0;
}