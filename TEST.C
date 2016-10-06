#include <cpm.h>

#define BSETDMA 5+128

int main () {
  unsigned char res;
  int p1=0x1111;
  int p2=0x2222;
  int p3=0x3333;
  res=bdos(BSETDMA, p1, p2, p3);
  return res;
}

