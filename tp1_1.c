#include <stdio.h>

int main()
{
    printf("Hola mundo\n");

    /* Punto 3.e) Declare un puntero en el procedimiento principal que apunte a una variable de algún tipo y muestre por pantalla lo siguiente:
    1) El contenido del puntero
    2) La dirección de memoria almacenada por el puntero.
    3) la dirección de memoria de la variable.
    4) la dirección de memoria del puntero.
    5) el tamaño de memoria utilizado por esa variable usando la función sizeof() */

    int *punt_num;
    int num = 5;
    punt_num = &num;

    printf("\nContenido del puntero: %d \n", *punt_num);
    printf("La direccion de memoria almacenada por el puntero: %p \n", punt_num);
    printf("La direccion de memoria de la variable: %p \n", &num);
    printf("La direccion de memoria del puntero: %p \n", &punt_num);
    printf("El tamanio de memoria utilizado por la variable: %d", sizeof(num));

    return 0;
}