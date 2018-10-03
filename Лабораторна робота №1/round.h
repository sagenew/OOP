#include<iostream>
#include<cmath>
using namespace std;

#define pi 3.1415926

class Round
{
private:
  double X,Y,radius;
public:
  Round() { X = 10; Y = 10; radius = 1; } //конструктор без ввода данних користувачем
  Round(double x, double y, double r) { X = x; Y = y; radius = r; } //конструктор з передачею аргументів
  Round(const Round &k) :X(-k.X), Y(k.Y), radius(k.radius) {} //конструктор копіювання (зі зміною аргументу)
  void setCoords(double x, double y) { X = x; Y = y; } //встановлення значень координат центру кола
  void setRadius(double r) { radius = r; } //встановлення значення радіусу
  double getCoords_X() { return X; } //отримати значення координати центру кола по осі Х
  double getCoords_Y() { return Y; } //отримати значення координати центру кола по осі Y
  double getRadius() { return radius; } //отримати значення радіусу кола
  double getS() { return pi * radius * radius; } //функція для визначення площі кола
  void Print() { cout << X << ' ' << Y << ' ' << radius << ' ' << getS() << "\n";} //вивід координат, радіусу та площі на екран
  void printS() { cout << getS() << "\n";} //вивід значення площі кола
  ~Round() { delete X; delete this->Y; delete this->radius; }//деструктор класу
};
