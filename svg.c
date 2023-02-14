#include <stdio.h>
#include <stdlib.h>
#include "svg.h"
#define SVG_WIDTH 30
#define SVG_HEIGHT 40
#define cx 10.0
#define cy 20.0
#define r 5.0
#define RECT_X 5.0
#define RECT_Y 6.0
#define RECT_WIDTH 8.0
#define RECT_HEIGHT 9.0
#define TEXTO "Acorda pedrinho"


// Acima, definição de constantes necessárias para desenhar um círculo

// Abaixo, função que escreve o cabeçalho do arquivo SVG:
void svg_header(FILE *svg) {
    fprintf(svg, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n");
    fprintf(svg, "<svg width=\"%d\" height=\"%d\" version=\"1.1\" xmlns=\"http://www.w3.org/2000/svg\">\n", SVG_WIDTH, SVG_HEIGHT);
}

// Abaixo, função que escreve o círculo no arquivo SVG:
void svg_circle(FILE *svg) {
    fprintf(svg, "<circle cx=\"%f\" cy=\"%f\" r=\"%f\" fill=\"blue\" />\n", cx, cy, r);
}

// Abaixo, função que escreve o retângulo no arquivo SVG:
void svg_rect(FILE *svg) {
    fprintf(svg, "<rect x=\"%f\" y=\"%f\" width=\"%f\" height=\"%f\" fill=\"yellow\" stroke=\"green\"  />\n", RECT_X, RECT_Y, RECT_WIDTH, RECT_HEIGHT);
}

// Abaixo, função que escreve o texto no arquivo SVG:
void svg_text(FILE *svg) {
    fprintf(svg, "<text x=\"%f\" y=\"%f\" font-family=\"sans-serif\" font-size=\"12\" fill=\"black\">%s</text>\n", 30.0, 31.0, TEXTO);
}
// Abaixo, função que escreve o rodapé do arquivo SVG:
void svg_footer(FILE *svg) {
    fprintf(svg, "</svg>\n");
}

// Abaixo, função principal:

