//
//  main.c
//  Informatica-2017
//

#include <stdio.h>
#include "ejercicios.h"

int main() {
   int ejercicio;
   printf("Ingrese el número del ejercicio a ejecutar:\n");
    scanf("%d",&ejercicio);
    switch (ejercicio) {
            case(1):
              ej1();
            break;
            case(2):
              ej2();
            break;
            case(3):
              ej3();
            break;
            case(4):
               ej4();
            break;
            case(5):
              ej5();
            break;
            case(6):
               ej6();
            break;
            //incluir desde aca todos los ejercicios siguientes
        default:
            printf("No existe tal ejercicio o no esta hecho");
    }
        
    return 0;
}
