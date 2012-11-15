#include <iostream>
#include <pthread.h>
using namespace std;

void *fib_thread(void*);
int fibonnaci(int x, int iteracion)
{
  cout<<"stack x : "<<&x<<" iteracion "<<&iteracion<<"\r\n";
  if(x == 0 || x == 1)
    return 1;
  else
    return fibonnaci(x-1, ++iteracion);
}

void *fib_thread(){
  fibonnaci(100,1);
}

int main()
{
  pthread_t tid_01;
  pthread_t tid_02;
  pthread_attr_t attr;
  pthread_attr_init(&attr);

  pthread_create(&tid_01, &attr, fib_thread, NULL);
  pthread_create(&tid_02, &attr, fib_thread, NULL);

  return 0;
}
