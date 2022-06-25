#include <graphx.h>
#include <ti/getcsc.h>
#include <debug.h>
#include <stdlib.h>

void printList(char* OPTIONS[], int BORDERWIDTH);

int main(void) {
	const int BORDERWIDTH = 3;
	char* OPTIONS[] = {
		"Triangles",
		"Shapes",
		"Unit Circle",
		"2 Points",
		"Synthetic /",
	};

	gfx_Begin();
	
	gfx_Rectangle(BORDERWIDTH, BORDERWIDTH, GFX_LCD_WIDTH-(2 * BORDERWIDTH), GFX_LCD_HEIGHT-(2 * BORDERWIDTH));
	gfx_Rectangle(GFX_LCD_WIDTH-GFX_LCD_HEIGHT+BORDERWIDTH, BORDERWIDTH, GFX_LCD_HEIGHT-(2 * BORDERWIDTH), GFX_LCD_HEIGHT-(2 * BORDERWIDTH));

	gfx_PrintStringXY("JIM", 2*BORDERWIDTH, 2*BORDERWIDTH);
	printList(OPTIONS, BORDERWIDTH);

  while (!os_GetCSC());

	gfx_End();

	return 0;
}

void printList(char* OPTIONS[], int BORDERWIDTH) {
	for (int i = 0; i < 5; i++) { // fix
		gfx_PrintStringXY(OPTIONS[i], 2*BORDERWIDTH, 2*BORDERWIDTH + (i+1) * (8+BORDERWIDTH));
	}
}