#include <stdio.h>

void f2(void)
{
  long *vect_not_initialized = NULL;
  unsigned int i = 0;

  for(i = 0; i < 10; i++)
  {
    vect_not_initialized[i] = i*100;
  }
}

void f1(void)
{
  int x = 32;
  f2();
}

int main(int arg, char *argv[])
{  
  f1();

  return 0;
}
