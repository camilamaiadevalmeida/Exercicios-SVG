#include <stdio.h>
#include <stdlib.h>
#include "svg.c"

// Função principal que invoca as funções do <circulo.c> para escrever o arquivo SVG:

int main() {
    FILE *svg;
    svg = fopen("circulo.svg", "w");
    svg_header(svg);
    svg_circle(svg);
    svg_rect(svg);
    svg_text(svg);
    svg_footer(svg);
    fclose(svg);
    return 0;
}

