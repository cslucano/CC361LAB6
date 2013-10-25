#include <iostream>
using namespace std;
#include "geometria.h"

int main()
{
  Punto* p = new Punto();

  cout<<"("<<p->get_X()<<", "<<p->get_Y()<<")";

  return 0;
}
