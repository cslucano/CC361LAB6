#include <iostream>
#include "geometria.h"
using namespace std;
int main()
{
  for(int i=0; i < 1e9; i++)
  {
    Punto* p = new Punto(i,i);
    cout<<i<<" "<<p<<" :"<<"("<<p->get_X()<<", "<<p->get_Y()<<")\n";    
    delete p;
  }

  return 0;
}
