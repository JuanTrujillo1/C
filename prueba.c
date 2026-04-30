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

void main(){
    int a, b;
    float c;

    printf("Ingrese un el primer valor: ");
    scanf("%d",&a);

    printf("Ingrese un el segundo valor: ");
    scanf("%d",&b);

    c = a/b;

    printf("%.2f",c);

    printf("\nLa suma de los dos valores es: %d\n", a+b);
    printf("La resta de los dos valores es: %d\n", a-b);
    printf("La multiplicacion de los dos valores es: %d\n", a*b);
    printf("La division de los dos valores es: %f\n", c);
    printf("La potencia de los dos valores es: %d\n", a^b);
    printf("El residuo de los dos valores es: %d\n", a%b);

    if (a < b){
        printf("%d es MENOR que %d\n",a,b);

        for (int i = a; i <= b; i++){
            printf("%d ",i);
        }

    }else if (a > b){
        printf("%d es MAYOR que %d\n",a,b);

        for (int i = a; i >= b; i--){
            printf("%d ",i);
        }

    }else{
        printf("%d es IGUAL que %d\n",a,b);
    }

    
}



