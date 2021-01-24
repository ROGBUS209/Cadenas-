
#include <stdio.h>
#include <stdlib.h>
int main() {
    int i=0;
    char cadena1 [] = "Aprender a programar (linea 1)\n";
    char cadena2 [] = "requiere esfuerzo (linea 2)\n";
    char cadena3 [] = "y dedicacion (linea 3)";
    FILE* fichero;
    fichero = fopen("cursoAF1.txt", "wt");
    printf("Longitud de cadena1 es %d \n", sizeof(cadena1));
    while (cadena1[i]!='\0') { fputc(cadena1[i], fichero); i++; }
    i=0;
    while (cadena2[i]!='\0') { fputc(cadena2[i], fichero); i++; }
    i=0;
    while (cadena3[i]!='\0') { fputc(cadena3[i], fichero); i++; }
    i=0;
    fclose(fichero);
    printf("Proceso completado");
    return 0; 
}



