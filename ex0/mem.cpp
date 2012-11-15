#include <iostream>
#include <stdlib.h>
using namespace std;

int main() 
{
  cout<<"segmento codigo: "<<(void *) main<<"\r\n";
  cout<<"segmento heap : "<<(void *) malloc(1)<<"\r\n";
  int x = 3;
  cout<<"segmento stack: "<<(void *) &x<<"\r\n";
  sleep(6000);
  return 0;
}
