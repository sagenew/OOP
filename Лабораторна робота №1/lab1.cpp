#include <iostream>
#include "round.h"
using namespace std;

int main()
{
  Round A;
  A.Print();

  A.setCoords(12,36);
  A.setRadius(7);

  A.Print();

  Round copyA = Round(A);
  copyA.Print();

  ~A;

  Round A = Round (25,63,11);
  A.Print();

  cout<<"\n";

  Round f[4] =
  {
    Round(),
    Round(2, 4, 2),
    Round(4, 5, 3),
    Round(f[2])
  }; 	//ініціалізований  статичний масив
  for (int i = 0; i < 4; i++) f[i].printS();	// вивід значень площі кола
}
