// #include <graphx.h>

// void begin(void);
// void end(void);
// bool step(void);
// void draw(void);

// int main(void) {
//     bool partial_redraw = false;

//     /* No rendering allowed! */
//     begin();

//     /* Initialize graphics drawing */
//     gfx_Begin();

//     /* Draw to the buffer to avoid rendering artifacts */
//     gfx_SetDrawBuffer();

//     /* No rendering allowed in step! */
//     while (step())
//     {
//         /* Only want to redraw part of the previous frame? */
//         if (partial_redraw)
//         {
//             /* Copy previous frame as a base for this frame */
//             gfx_BlitScreen();
//         }

//         /* As little non-rendering logic as possible */
//         draw();

//         /* Queue the buffered frame to be displayed */
//         gfx_SwapDraw();
//     }

//     /* End graphics drawing */
//     gfx_End();
//     end();

//     return 0;
// }

// /* Implement me! */
// void begin(void) {

// }

// /* Implement me! */
// void end(void) {

// }

// /* Implement me! */
// bool step(void) {
//     return false;
// }

// /* Implement me! */
// void draw(void) {

// }

// #include <ti/screen.h>
// #include <ti/getcsc.h>
// #include <stdlib.h>

// /* Main function, called first */
// int main(void)
// {
//     /* Clear the homescreen */
//     os_ClrHome();

//     /* Print a string */
//     os_PutStrFull("Hello, World.");

//     /* Waits for a key */
//     while (!os_GetCSC());

//     /* Return 0 for success */
//     return 0;
// }

// #include <ti/getcsc.h>
// #include <graphx.h>
// #include <stdlib.h>

// void PrintCentered(const char *str);

// int main(void)
// {
//     /* Initialize graphics drawing */
//     gfx_Begin();

//     /* Print the message on the screen */
//     PrintCentered("Hello, World!");

//     /* Waits for a key */
//     while (!os_GetCSC());

//     /* End graphics drawing */
//     gfx_End();

//     return 0;
// }

// /* Prints a screen centered string */
// void PrintCentered(const char *str)
// {
//     gfx_PrintStringXY(str,
//                       (GFX_LCD_WIDTH - gfx_GetStringWidth(str)) / 2,
//                       (GFX_LCD_HEIGHT - 8) / 2);
// }

// #include <ti/getcsc.h>
// #include <sys/util.h>
// #include <graphx.h>

// int main(void)
// {
//     uint8_t y;
//     uint24_t i;
//     int count = 0;

//     /* Initialize graphics drawing */
//     gfx_Begin();

//     /* Circle Drawing */
//     y = 40;
//     gfx_SetColor(18);
//     for (i = 2; i < 13; i++)
//     {
//         y += i;
//         gfx_FillCircle_NoClip(80, y, i);
//         y += i + 3;
//     }

//     y = 40;
//     gfx_SetColor(19);
//     for (i = 2; i < 13; i++)
//     {
//         y += i;
//         gfx_FillCircle(240, y, i);
//         y += i + 3;
//     }

//     y = 40;
//     gfx_SetColor(20);
//     for (i = 2; i < 13; i++)
//     {
//         y += i;
//         gfx_Circle(160, y, i);
//         y += i + 3;
//     }

//     /* Waits for a key */
//     while (!os_GetCSC());
    
//     /* Clear the screen */
//     gfx_FillScreen(255);
    
//     /* Ellipse Drawing */
//     gfx_SetColor(56);
//     for (i = 10; i < 50; i += 2)
//     {
//         gfx_Ellipse_NoClip(100, 100, i, 40);
//     }
//     gfx_SetColor(195);
//     gfx_Ellipse(300, 35, 140, 80);
//     gfx_SetColor(5);
//     gfx_FillEllipse_NoClip(200, 150, 120, 50);
//     gfx_SetColor(210);
//     gfx_FillEllipse(25, 200, 60, 90);
    
//     /* Waits for a key */
//     while (!os_GetCSC());

//     /* Clear the screen */
//     gfx_FillScreen(255);

//     /* Rectangle Drawing */
//     gfx_SetColor(227);
//     gfx_Rectangle(20, 20, 280, 200);
//     gfx_SetColor(18);
//     gfx_Rectangle(-10, -10, 50, 50);
//     gfx_Rectangle(280, -10, 50, 50);
//     gfx_Rectangle(-10, 200, 50, 50);
//     gfx_Rectangle(280, 200, 50, 50);
//     gfx_SetColor(4);
//     gfx_Rectangle_NoClip(30, 30, 260, 180);

//     /* Waits for a key */
//     while (!os_GetCSC());

//     /* Clear the screen */
//     gfx_FillScreen(255);

//     /* Filled Rectangle Drawing */
//     gfx_SetColor(227);
//     gfx_FillRectangle(20, 20, 280, 200);
//     gfx_SetColor(18);
//     gfx_FillRectangle(-10, -10, 50, 50);
//     gfx_FillRectangle(280, -10, 50, 50);
//     gfx_FillRectangle(-10, 200, 50, 50);
//     gfx_FillRectangle(280, 200, 50, 50);
//     gfx_SetColor(4);
//     gfx_FillRectangle_NoClip(30, 30, 260, 180);

//     /* Wait for any key */
//     while (!os_GetCSC());

//     /* Clear the screen */
//     gfx_FillScreen(255);

//     /* Triangle drawing */
//     gfx_SetColor(18);
//     gfx_FillTriangle(110, 170, 110, 70, 230, 70);
//     gfx_SetColor(5);
//     gfx_FillTriangle_NoClip(110, 170, 230, 70, 230, 170);
//     gfx_SetColor(228);
//     gfx_FillTriangle(110, 170, 200, 200, 230, 200);
//     gfx_FillTriangle_NoClip(140, 40, 110, 40, 230, 70);
//     gfx_FillTriangle(1, 1, 318, 1, 1, 1);
//     gfx_FillTriangle_NoClip(1, 238, 1, 238, 318, 238);
//     gfx_FillTriangle(1, 3, 1, 236, 1, 236);
//     gfx_FillTriangle_NoClip(318, 3, 318, 236, 318, 3);

//     /* Waits for a key */
//     while (!os_GetCSC());

//     /* Clear the screen */
//     gfx_FillScreen(255);

//     /* Line Drawing */
//     gfx_SetColor(227);
//     gfx_Line(-10, -10, 330, 250);
//     gfx_Line(-10, 250, 330, -10);
//     gfx_Line_NoClip(0, 0, 320, 0);
//     gfx_Line_NoClip(0, 0, 0, 240);
//     gfx_Line_NoClip(0, 240, 320, 240);
//     gfx_Line_NoClip(320, 240, 320, 0);
//     gfx_SetColor(18);
//     gfx_HorizLine(-10, 10, 340);
//     gfx_HorizLine_NoClip(0, 230, 320);
//     gfx_VertLine(10, -10, 260);
//     gfx_VertLine_NoClip(310, 0, 240);

//     /* Waits for a key */
//     while (!os_GetCSC());

//     /* Clear the screen */
//     gfx_FillScreen(255);

//     /* Pixel Drawing */
//     gfx_SetColor(227);
//     for (i = 0; i < 2048; ++i)
//     {
//         int x = randInt(0, 319);
//         int y = randInt(0, 239);
//         uint8_t color = randInt(0, 255);

//         gfx_SetColor(color);
//         gfx_SetPixel(x, y);
//         if (gfx_GetPixel(x, y) == color)
//         {
//             count++;

//             gfx_SetColor(255);
//             gfx_FillRectangle(0, 0, 50, 10);
//             gfx_SetTextXY(0, 0);
//             gfx_PrintInt(count, 5);
//         }
//     }

//     /* Test character printing */
//     gfx_SetTextXY(1, 232);
//     gfx_PrintChar('D');
//     gfx_PrintChar('O');
//     gfx_PrintChar('N');
//     gfx_PrintChar('E');

//     /* Waits for a key */
//     while (!os_GetCSC());

//     /* End graphics drawing */
//     gfx_End();

//     return 0;
// }

#include <math.h>
#include <ti/getcsc.h>
#include <graphx.h>

int main(void)
{
    int pts[10];
    int i;

    int rx = 100;
    int ry = 100;
    int cx = GFX_LCD_WIDTH / 2;
    int cy = GFX_LCD_HEIGHT / 2;

    /* Build the coordinates of the polygon */
    double theta = -M_PI / 2;
    double dtheta = 4 * M_PI / 5;
    for (i = 0; i < 10; i += 2)
    {
        pts[i+0] = (int)(cx + rx * cos(theta)),
        pts[i+1] = (int)(cy + ry * sin(theta));
        theta += dtheta;
    }

    /* Initialize graphics drawing */
    gfx_Begin();

    /* Set the outline color */
    gfx_SetColor(0);

    /* Draw a polygon */
    gfx_Polygon(pts, 5);

    /* Waits for a key */
    while (!os_GetCSC());

    /* Flood fill the inside of the polygon */
    gfx_FloodFill(GFX_LCD_WIDTH / 2, GFX_LCD_HEIGHT / 2, 229);

    /* Waits for a key */
    while (!os_GetCSC());

    /* Flood fill the outside of the polygon */
    gfx_FloodFill(0, 0, 9);

    /* Waits for a key */
    while (!os_GetCSC());

    /* End graphics drawing */
    gfx_End();

    return 0;
}