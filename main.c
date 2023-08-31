 
#include <stdio.h>

//Leonardo Bolaños San Juan

int main()
{
float a=10.0;
float b=8.5;
float c=7.5;
float d=6.0;
float variable;
char opcion;

do{
   printf("Ingresa tu calificación: ");
    scanf("%f", &variable); 
if (variable >= 0 && variable <=d) {
        printf("Su calificación es: NA\n");
    } else if (variable >= d && variable <= c) {
        printf("Su calificación es: S\n");
    } else if (variable >= c && variable <= b) {
        printf("Su calificación es: B\n");
    } else if (variable >= b && variable <= a) {
        printf("Su calificación es: MB\n");
    } else {
        printf("\tValor inválido\n");
    }
    printf("¿Deseas ingresar otra calificación? (S/N):");
        scanf(" %c", &opcion);
        while ((getchar()) != '\n');
    } while (opcion == 'S' || opcion == 's');
    return 0;
}


