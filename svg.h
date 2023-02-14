#include <stdio.h>
#include <stdlib.h>


void svg_rect(FILE *svg, int x, int y, int width, int height, char *fill);
void svg_text(FILE *svg, int x, int y, char *text);
void svg_circle(FILE *svg, int cx, int cy, int r, char *fill);
void svg_footer(FILE *svg);
void svg_header(FILE *svg, int width, int height);


