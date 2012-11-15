#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

int fibonnaci(int x, int iteracion)
{
  printf("stack %p\n", &x);
  if(x == 0 || x == 1)
    return 1;
  else
    return fibonnaci(x-1, ++iteracion);
}

void* fib_thread(){
  fibonnaci(10,1);
}

int main()
{
  pthread_t tid_01;
  pthread_t tid_02;
  pthread_attr_t attr;
  pthread_attr_init(&attr);

  pthread_create(&tid_01, &attr, fib_thread, NULL);
  pthread_create(&tid_02, &attr, fib_thread, NULL);

  pthread_join(tid_01, NULL);
  pthread_join(tid_02, NULL);
  return 0;
}
