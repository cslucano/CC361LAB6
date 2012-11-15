#include <iostream>
#include "geometria.h"
using namespace std;
int main()
{
  Punto* p = new Punto();

  cout<<"("<<p->get_X()<<", "<<p->get_Y()<<")";

  return 0;
}
