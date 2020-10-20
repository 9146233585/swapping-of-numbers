#include<stdio.h>

int main()

 {

   int a=10,b=20;

   printf("Before swap a=%d b=%d",a,b);

   a=a+b;

   b=a-b;

   a=a-b;

   printf("\nAfter swap a=%d b=%d",a,b);

  return 0;

  }


/*OUTPUT:

sai@sai-Inspiron-3576:~$ gcc swapping.c
sai@sai-Inspiron-3576:~$ ./a.out
Before swap a=10 b=20
After swap a=20 b=10sai@sai-Inspiron-3576:~$ ^C
sai@sai-Inspiron-3576:~$ 






