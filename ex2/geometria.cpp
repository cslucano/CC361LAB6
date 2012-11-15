#include "geometria.h"
int Punto::get_X()
{
  return *x;
}
int Punto::get_Y()
{
  return *y;
}
void Punto::set(int a, int b)
{
  *x = a;
  *y = b;
}
int Punto::abs()
{
  return *x + *y;
}
Punto::Punto()
{
  x = new int;
  y = new int;
  *x = 0;
  *y = 0;
}
Punto::Punto(int a)
{
  x = new int;
  y = new int;
  *x = a;
  *y = 0;
}
Punto::Punto(int a, int b)
{
  x = new int;
  y = new int;
  *x = a;
  *y = b;
}

Punto::~Punto()
{
  delete x;
  delete y;
}
