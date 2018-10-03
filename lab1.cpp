#include <iostream>
using namespace std;

#define pi 3.1415926

class Round
{
private:
  double X,Y,radius;
public:
  Round() { X = 10; Y = 10; radius = 1; }
  Round(double x, double y, double r) { X = x; Y = y; radius = r; }
  Round(const Round &k) :X(-k.X), Y(k.Y), radius(k.radius) {}
  void setCoords(double x, double y) { X = x; Y = y; }
  void setRadius(double r) { radius = r; }
  double getCoords_X() { return X; }
  double getCoords_Y() { return Y; }
  double getRadius() { return radius; }
  double getS() { return pi * radius * radius; }
  void Print() { cout << X << ' ' << Y << ' ' << radius << ' ' << getS() << "\n";}
};

int main()
{
  Round A;
  A.Print();

  A.setCoords(12,36);
  A.setRadius(7);

  A.Print();

  cout<<"\n";

  Round f[4] =
  {
    Round(),
    Round(2, 4, 2),
    Round(4, 5, 3),
    Round(f[2])
  }; 	/* создание массива объектов и инициализация их атрибутов */
  for (int i = 0; i < 4; i++) f[i].Print();	// вывод значений атрибутов
}
