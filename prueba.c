/**
* Realizar una calculadora que reciba 2 parametros por teclado y
* Sume.
* Reste.
* Multiplique.
* Divida.
* Obtenga la potencia.
* Obtenga el cociente.
* indique si es mayor igual, o menor.
* Que imprima los números desde el primer parámetro al segundo parámetro.
*/

#include <stdio.h>
#include <math.h>


void main(){
    float a, b, c;

    printf("Ingrese un el primer valor: ");
    scanf("%f",&a);

    printf("Ingrese un el segundo valor: ");
    scanf("%f",&b);

    printf("\nLa suma de los dos valores es: %.2f\n", a+b);
    printf("La resta de los dos valores es: %.2f\n", a-b);
    printf("La multiplicacion de los dos valores es: %.2f\n", a*b);

    c = a / b;

    printf("La division de los dos valores es: %.2f\n", c);

    c = pow(a, b);

    printf("La potencia de los dos valores es: %.2f\n", c);

    c = fmod(a, b);
    
    printf("El residuo de los dos valores es: %.2f\n", c);

}



