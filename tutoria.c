#include <tutoria.h>

void main()
{
  set_tris_B(0x00);
   while(TRUE)
   {
    output_high(PIN_B0);
    delay_ms(200);
    output_low(PIN_B0);
    delay_ms(100);
    
   }

}
