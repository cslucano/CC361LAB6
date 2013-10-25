#include <iostream>
using namespace std;
#include "geometria.h"
int main()
{
  for(int i=0; i < 1e9; i++)
  {
    Punto* p = new Punto(i,i);
    cout<<i<<" :"<<"("<<p->get_X()<<", "<<p->get_Y()<<")\r\n";    
    delete p;
    //sleep(2);
  }

  return 0;
}
