#include <conio.h>
#include <c128/vdc.h>

char * MSG = "The Z80 Lives!!";
/* RAW sound block */
extern char rawsound[];
#define rawsoundlen 28160
#asm
._rawsound
        BINARY "a4bit.raw"
#endasm

char *asc2pet(char[] a)
{
   int i = 0;

   while (a[i])
   {
      if (a[i]>=0x41 && a[i]<=0x5a)
         a[i] = a[i]+0x80;
      else if (a[i]>=0x61 && a[i]<=0x7a)
         a[i] = a[i]-0x20;
      i++;
   }
   return a;
}

int main()
{
   ushort r, y, len, col;

   mapvdc();
   clrscrvdc(32);
   clrattrvdc(vdcBlack);
   asc2pet(MSG);
   len = strlen(MSG);
   for (int cnt=0;cnt<200;cnt++) {
      r = rand();
      y = r % 25;
      col = (r % 15)+1;
      printstrvdc(y<<1, y, col, MSG);
   }

   setintctrlcia(cia2,ciaClearIcr);
   settimeracia(cia2,timervalcia(8000),ciaCPUCont);
   playzb4sid(rawsound,rawsoundlen);

   while (!(kbhit()));
}
