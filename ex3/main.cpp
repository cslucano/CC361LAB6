#include <iostream>
using namespace std;

int fibonnaci(int x, int iteracion)
{
  cout<<"stack - direccion de x : "<<&x<<" iteracion "<<&iteracion<<"\r\n";
  if(x == 0 || x == 1)
    return 1;
  else
    return fibonnaci(x-1, ++iteracion);
}

int main()
{
  fibonnaci(100, 1);
  return 0;
}
