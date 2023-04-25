#include <stddef.h>
#include <stdio.h>
#include <stdint.h>

int countbits(int num);

uint32_t bits_32 = 0b101101111011011110110111;         //18 set

int main(void)
{

  int count = countbits(bits_32); 
  printf("%d\n", count);
  return 0;
}


int countbits(int num) {
  num = num - ((num >> 1) & 0x55555555);
  num = (num & 0x33333333) + ((num >> 2) & 0x33333333);
  num = (num + (num >> 4)) & 0x0F0F0F0F;
  num = num + (num >> 8);
  num = num + (num >> 16);
  return num & 0x0000003F;
}
