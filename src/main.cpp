#include <graphx.h>
#include <ti/getcsc.h>

int main(void) {
	const int BORDERWIDTH = 3;

	gfx_Begin();
	
	gfx_Rectangle(BORDERWIDTH, BORDERWIDTH, GFX_LCD_WIDTH-(2 * BORDERWIDTH), GFX_LCD_HEIGHT-(2 * BORDERWIDTH));

	gfx_PrintStringXY("Hello, World", 2*BORDERWIDTH, 2*BORDERWIDTH);
	gfx_PrintStringXY("Hello, World", 2*BORDERWIDTH, 2*BORDERWIDTH +(8+BORDERWIDTH));

  while (!os_GetCSC());

	gfx_End();

	return 0;
}
