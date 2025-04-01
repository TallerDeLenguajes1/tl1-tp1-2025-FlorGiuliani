#include <stdio.h>
//#include <math.h>

int cuadradoNum (int num);
void cuadradoNumVoid (int num);
void mostrarNumero (int num);
void invertir(int a, int b);
void orden(int a, int b);

int main()
{
    int numero = 10;
    printf("El numero es %d\n", numero);

    printf("El cuadrado de %d es %d\n", numero, cuadradoNum(numero)); //a)
    
    cuadradoNumVoid (numero); //b)

    int variable; //c)
    printf("\nIngrese un numero entero: ");
    scanf("%d", &variable);
    mostrarNumero (variable);

    int a, b; //d)
    printf("\nIngrese el valor de A: ");
    scanf("%d", &a);
    printf("Ingrese el valor de B: ");
    scanf("%d", &b);
    printf("A vale %d\nB vale %d", a, b);
    printf("\nInvertimos los valores:");
    invertir(a, b);

    int numA, numB; //d)
    printf("\n\nIngrese el valor de A: ");
    scanf("%d", &numA);
    printf("Ingrese el valor de B: ");
    scanf("%d", &numB);
    printf("A vale %d\nB vale %d", numA, numB);
    printf("\nOrdenamos los valores:");
    orden(numA, numB);

    return 0;
}


// a) Haga una función que devuelva el cuadrado de un número
int cuadradoNum (int num)
{
    return num*num;
    //return pow(num,2);
}


// b) Haga la función anterior, pero devolviendo un tipo void
void cuadradoNumVoid (int num)
{
    printf("El cuadrado de %d es %d\n", num, num*num);
}


// c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
void mostrarNumero (int num)
{
    printf("\nLa dirección de la variable ingresada es: %p", &num);
    printf("\nY su contenido es: %d\n", num);
}


// d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
//  void Invertir(a,b) //deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a

void invertir(int a, int b)
{
    int c = a;
    a = b;
    b = c;
    printf("\nA vale %d\nB vale %d", a, b);
}


// e) Dado dos parámetros de entrada, deberá devolverlos de forman ordenada, en el primer parámetro el menor y en el segundo el mayor.
//  void orden(a,b) //deberá devolver en el valor de a el valor más chico, y en el valor de b el valor más grande

void orden(int a, int b)
{
    if (a>b) {
        invertir(a,b);
    } else {
        printf("\nA vale %d\nB vale %d", a, b);
    }
}


// f) Utilice las funciones anteriores para leer pares de valores e imprimirlos por pantalla.