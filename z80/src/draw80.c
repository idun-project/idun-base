#include <graphics.h>
#include <conio.h>
#include <c128/vdc.h>

extern ushort vdcBitMapMemSize;

int main() {
  int I;

  // Initialize bitmap display
  mapvdc();
  outvdc(vdcVtDisp, 25);          /* 25 rows (200 pix) */
  outvdc(vdcFgBgColor, vdcBlack); /* black screen */
  attrsoffvdc();                  /* disable attrs to work on 16k vdc */
  setbitmapvdc(vdcDispMem, vdcAttrMem, vdcWhite, vdcBlack);
  clrbitmapvdc(0);                /* clear bit map */

  for (I = 0; I <= 639; I += 80) {
    linevdc(319, 0, I, 199);
    linevdc(I, 0, 319, 199);
  }
  for (I = 32; I <= 319; I += 32) {
    ellipsevdc(319, 99, I, I / 4);
  }

  while (!kbhit())
    ;
}
