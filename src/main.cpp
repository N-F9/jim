#include <graphx.h>
#include <ti/getcsc.h>

int main(void) {
	gfx_Begin();
	
	gfx_Rectangle(2,2, 315, 236);

  while (!os_GetCSC());

	gfx_End();

	return 0;
}
