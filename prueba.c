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

    c= a+b;

    printf("\nLa suma de los dos valores es: %.2f\n", c);

    c = a-b;

    printf("La resta de los dos valores es: %.2f\n", c);

    c= a*b;

    printf("La multiplicacion de los dos valores es: %.2f\n",c);

    c = a / b;

    printf("La division de los dos valores es: %.2f\n", c);

    c = (float)pow((double)a, (double)b);
    /*se usa el pow de esta forma ya que corrompe los datos de a y b*/

    printf("La potencia de los dos valores es: %.2f\n", c);

    c = fmod(a, b);
    
    printf("El residuo de los dos valores es: %.2f\n", c);

    if (a < b){
        printf("%.2f es MENOR que %.2f\n",a,b);

        for (int i = a; i <= b; i++){
            printf("%d ",i);
        }

    }else if (a > b){
        printf("%.2f es MAYOR que %.2f\n",a,b);

        for (int i = a; i >= b; i--){
            printf("%d ",i);
        }

    }else{
        printf("%.2f es IGUAL que %.2f\n",a,b);
    }

}



