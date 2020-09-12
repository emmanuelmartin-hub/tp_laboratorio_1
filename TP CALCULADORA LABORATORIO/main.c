#include <stdio.h>
#include <stdlib.h>
#include "menuoperaciones.h"

/*
Alumno: Emmanuel David Martín

DNI: 38840423.

División: 1ºA.

Profesor: Christian Bauss.

Universidad Tecnologica Nacional-Sede Facultad Regional Avellaneda.

Año:2020.

Ununciado: Hacer una calculadora.
Para ello el programa iniciará y contará con un menú de opciones.

*/
int main()
{
  //Declaración de variables.
  int opcion;
  int a=0;
  int b=0;
  int sumar=0;
  int restar=0;
  float dividir=0;
  int multiplicar=0;
  int factorialA=0;
  int factorialB=0;
  int flagPrimerMenu=0;
  int flagSegundoMenu=0;
  int flagPrimerOperando=0;
  int flagSegundoOperando=0;



    do
    {
         system("cls");
         opcion=menu(a,b, flagPrimerMenu, flagSegundoMenu);//Llamamiento a función menú.
         switch(opcion)//Selección de opciones de menú.
                {
                    case 1://Primer Operando
                        printf("\nIngresar 1er operando\n");
                        scanf("%d", &a);
                        flagPrimerMenu=1;
                        flagPrimerOperando=1;
                        break;
                    case 2://Segundo Operando.
                        printf("\nIngresar 2do operando\n");
                        scanf("%d", &b);
                        flagSegundoMenu=1;
                        flagSegundoOperando=1;
                        break;
                    case 3://Asigna resultado de operaciones matemáticas
                        if(flagPrimerOperando==1 && flagSegundoOperando==1)
                        {
                            printf("Calculos realizados\n");
                            sumar=sumarNumeros(a,b);
                            restar=restarNumeros(a,b);
                            dividir=dividirNumeros(a,b);
                            multiplicar=multiplicarNumeros(a,b);
                            factorialA=factorialNumeros(a);
                            factorialB=factorialNumeros(b);
                        }
                        else
                        {
                            printf("Debe ingresar ambos operandos\n");
                        }
                        break;
                    case 4://Informa los resultados de operaciones matemáticas
                        printf("El resultado de %d+%d es: %d \n\n", a, b, sumar);
                        printf("El resultado de %d-%d es: %d \n\n", a, b, restar);
                        if(b>0)
                            {
                                printf("\nEl resultado de %d/%d es: %.2f \n\n", a, b, dividir);

                            }
                            else
                            {
                                printf("\nNo es posible dividir por 0.\n");
                            }
                        printf("El resultado de %d*%d es: %d \n\n", a, b, multiplicar);
                           if(a>0 && b>0)
                            {
                                 printf("\nEl factorial de A es:%d\n\n",factorialA);
                                 printf("El factorial de B es:%d\n\n ",factorialB);
                            }
                            else
                            {
                                 printf("\nNo es posible realizar el factorial con un numero negativo.\n");
                            }
                        break;
                    case 5://Sale del programa
                        exit (0);
                        break;
                    default:
                        printf("Ingrese una opcion valida\n");
                        break;
                }
        system("pause");
        system("cls");
        fflush(stdin);
    }
    while(1);
    return 0;
}

