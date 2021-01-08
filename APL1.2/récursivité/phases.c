#include<stdio.h>
#include<stdlib.h>

void exemple(unsigned n) {
  if (n != 0) {
    putchar('>');
    exemple(n-1);
    putchar('<');
  } else
    putchar('O');
}


void main() {
	exemple(2);
}