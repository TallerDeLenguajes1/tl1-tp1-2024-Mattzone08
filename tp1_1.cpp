#include <stdio.h>


int main(){

    int numero = 3, *pnumero;

    pnumero = &numero;

    printf("\n\nEl puntero contiene: %d ",*pnumero);

    printf("\n\nLa Direccion de memoria que guarda el puntero es: %p ",pnumero);

    printf("\n\nLa Direccion de memoria de la variable es: %p ",&numero);

    printf("\n\nLa Direccion de memoria del puntero es: %p ",&pnumero);

    printf("\n\nEl tamaño de memoria que usa la variable es de: %d bytes ", sizeof(numero));

    printf("Hola Mundo");

    return 0;

}