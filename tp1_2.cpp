#include <stdio.h>

float cuadrado(float num1);
 
void cuadrado2(float *num1);

void muestra(float variable);

void Invertir(float *a,float *b);

void orden(float *a,float *b);

int main () {

float a , b, cuadradito;

printf("\n\nIngrese el primer numero: ");
scanf("%f",&a);

printf("\n\nIngrese el segundo numero: ");
scanf("%f",&b);

 cuadradito = cuadrado(a);

printf("\n\nEl cuadrado del numero es: %f",cuadradito);

cuadrado2(&a);
printf("\n\nEl cuadrado del numero es: %f",a);

muestra(b);

Invertir(&a, &b);

orden(&a,&b);

return 0;


}

float cuadrado(float num1){

float resultado;

resultado = num1 * num1;

return resultado;

}

void cuadrado2(float *num1){

    float producto = *num1;

    *num1 = producto * producto;

    return;
}

void muestra(float variable){

    printf("\n\nEl contenido de la variable es: %f",variable);

    printf("\n\nLa direccion de memoria de la variable es: %p",&variable);

    return;

}

void Invertir(float *a,float *b){

    float aux;

    aux = *a;
    *a = *b;
    *b = aux;

    printf("los valores invertidos quedaron asi, en la variable a: %f y en la variable b: %f",*a,*b);

    return;

}

void orden(float *a,float *b){

    float aux;

    if (*a > *b)
    {
    
    aux = *a;
    *a = *b;
    *b = aux;

    }
    else
    {
        
    aux = *b;
    *b = *a;
    *a = aux;

    }
    
    printf("los valores ordenados quedaron asi, en la variable a: %f y en la variable b: %f",*a,*b);

    return;

}