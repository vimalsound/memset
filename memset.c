#include<stdio.h>
#include<stdio.h>

char a[10] = "vimal";

void memset(void *dt, int val, int num)
{
  char *st = (char*)dt;
  
  while(num--)
  {
    *st++ = val;
  }
}



void main()
{
   memset(a,'s',3);
   printf("%s\n\r", a);
}
