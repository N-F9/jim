#include <graphx.h>
#include <ti/getcsc.h>
#include <debug.h>
#include <stdlib.h>

void printList(char* OPTIONS[], int BORDERWIDTH);
void render(int page, int x, int y);

int main(void) {
	const int BORDERWIDTH = 3;
	char* OPTIONS[] = {
		"Triangles",
		"Shapes",
		"Unit Circle",
		"2 Points",
		"Synthetic /",
	};
	int page = 0;

	gfx_Begin();
	
	gfx_Rectangle(BORDERWIDTH, BORDERWIDTH, GFX_LCD_WIDTH-(2 * BORDERWIDTH), GFX_LCD_HEIGHT-(2 * BORDERWIDTH));
	gfx_Rectangle(GFX_LCD_WIDTH-GFX_LCD_HEIGHT+BORDERWIDTH, BORDERWIDTH, GFX_LCD_HEIGHT-(2 * BORDERWIDTH), GFX_LCD_HEIGHT-(2 * BORDERWIDTH));

	gfx_PrintStringXY("JIM", 2*BORDERWIDTH, 2*BORDERWIDTH);
	printList(OPTIONS, BORDERWIDTH);

	
	render(page, GFX_LCD_WIDTH-GFX_LCD_HEIGHT+BORDERWIDTH, BORDERWIDTH);

  while (true) {
		sk_key_t key = NULL;
    while (!key)
			key = os_GetCSC();
		dbg_printf("%d\n", key);
		gfx_SetColor(255);
		gfx_FillRectangle(GFX_LCD_WIDTH-GFX_LCD_HEIGHT+BORDERWIDTH+1, BORDERWIDTH+1, GFX_LCD_HEIGHT-(2 * BORDERWIDTH)-2, GFX_LCD_HEIGHT-(2 * BORDERWIDTH)-2);
		gfx_SetColor(0);
		// gfx_FloodFill(GFX_LCD_WIDTH-GFX_LCD_HEIGHT+BORDERWIDTH+1, BORDERWIDTH+1, 0);
		// gfx_Rectangle(BORDERWIDTH, BORDERWIDTH, GFX_LCD_WIDTH-(2 * BORDERWIDTH), GFX_LCD_HEIGHT-(2 * BORDERWIDTH));
		// gfx_Rectangle(GFX_LCD_WIDTH-GFX_LCD_HEIGHT+BORDERWIDTH, BORDERWIDTH, GFX_LCD_HEIGHT-(2 * BORDERWIDTH), GFX_LCD_HEIGHT-(2 * BORDERWIDTH));
		

		if (key == sk_Up && page > 0) {
			--page;
		}

		if (key == sk_Down && page < 4) {
			++page;
		}

		if (key == sk_Clear) {
			gfx_End();
			return 0;
		}
		
		render(page, GFX_LCD_WIDTH-GFX_LCD_HEIGHT+BORDERWIDTH, BORDERWIDTH);

	}
}

void printList(char* OPTIONS[], int BORDERWIDTH) {
	for (int i = 0; i < 5; i++) { // fix
		gfx_PrintStringXY(OPTIONS[i], 2*BORDERWIDTH, 2*BORDERWIDTH + (i+1) * (8+BORDERWIDTH));
	}
}

void render(int page, int x, int y) {
	switch (page) {
		case 0:
			gfx_PrintStringXY("tri", x, y);
			break;
		case 1:
			gfx_PrintStringXY("shapes", x, y);
			break;
		case 2:
			gfx_PrintStringXY("uc", x, y);
			break;
		case 3:
			gfx_PrintStringXY("2p", x, y);
			break;
		case 4:
			gfx_PrintStringXY("s/", x, y);
			break;
		
		default:
			break;
	}
}