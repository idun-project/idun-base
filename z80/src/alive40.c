#include <conio.h>

char * MSG = "The Z80 Lives!!";
/* RAW sound block */
extern char rawsound[];
#define rawsoundlen 28160
#asm
._rawsound
        BINARY "a4bit.raw"
#endasm

int main()
{
   ushort r, y, len, col;

   clrscr();
   len = strlen(MSG);
   for (int cnt=0;cnt<200;cnt++) {
      r = rand();
      y = r % 25;
      col = (r % 15)+1;
      gotoxy(y, y);
      textcolor(col);
      printf(MSG);
   }

   setintctrlcia(cia2,ciaClearIcr);
   settimeracia(cia2,timervalcia(8000),ciaCPUCont);
   playzb4sid(rawsound,rawsoundlen);

   while (!(kbhit()));
}
