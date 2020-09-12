#include "menuoperaciones.h"
int menu( int a, int b, int flagPrimerMenu, int flagSegundoMenu)
{

    int opcion;
        if(flagPrimerMenu==0 && flagSegundoMenu==0)
        {
                printf("Calculadora Laboratorio\n\n");
                printf("1. Ingresar 1er operando (A=x)\n\n");
                printf("2. Ingresar 2do operando (B=y)\n\n");
                printf("3. Calcular todas las operaciones\n");
                printf("a) Calcular la suma (A+B)\n");
                printf("b) Calcular la resta (A-B)\n");
                printf("c) Calcular la division (A/B)\n");
                printf("d) Calcular la multiplicacion (A*B)\n");
                printf("e) Calcular el factorial (A!)\n");
                printf("f) Calcular el factorial (B!)\n\n");
                printf("4. Informar resultados\n\n");
                printf("5. Salir\n\n");
        }
        else if(flagPrimerMenu!= 0 && flagSegundoMenu == 0)
        {
                printf("Calculadora Laboratorio\n\n");
                printf("1. Ingresar 1er operando (A=%d)\n\n", a);
                printf("2. Ingresar 2do operando (B=y)\n\n");
                printf("3. Calcular todas las operaciones\n");
                printf("a) Calcular la suma (%d+B)\n", a);
                printf("b) Calcular la resta (%d-B)\n", a);
                printf("c) Calcular la division (%d/B)\n", a);
                printf("d) Calcular la multiplicacion (%d*B)\n", a);
                printf("e) Calcular el factorial (%d!)\n", a);
                printf("f) Calcular el factorial (B!)\n\n");
                printf("4. Informar resultados\n\n");
                printf("5. Salir\n\n");
        }
        else if(flagPrimerMenu == 0 && flagSegundoMenu != 0)
        {
                printf("Calculadora Laboratorio\n\n");
                printf("1. Ingresar 1er operando (A=x)\n\n");
                printf("2. Ingresar 2do operando (B=%d)\n\n", b);
                printf("3. Calcular todas las operaciones\n");
                printf("a) Calcular la suma (A+%d)\n", b);
                printf("b) Calcular la resta (A-%d)\n", b);
                printf("c) Calcular la division (A/%d)\n", b);
                printf("d) Calcular la multiplicacion (A*%d)\n", b);
                printf("e) Calcular el factorial (A!)\n");
                printf("f) Calcular el factorial (%d!)\n\n", b);
                printf("4. Informar resultados\n\n");
                printf("5. Salir\n\n");
        }
        else if(flagPrimerMenu!= 0 && flagSegundoMenu != 0)
        {
                printf("Calculadora Laboratorio\n\n");
                printf("1. Ingresar 1er operando (A=%d)\n\n", a);
                printf("2. Ingresar 2do operando (B=%d)\n\n", b);
                printf("3. Calcular todas las operaciones\n");
                printf("a) Calcular la suma (%d+%d)\n", a, b);
                printf("b) Calcular la resta (%d-%d)\n", a, b);
                printf("c) Calcular la division (%d/%d)\n", a, b);
                printf("d) Calcular la multiplicacion (%d*%d)\n", a, b);
                printf("e) Calcular el factorial (%d!)\n", a);
                printf("f) Calcular el factorial (%d!)\n\n", b);
                printf("4. Informar resultados\n\n");
                printf("5. Salir\n\n");
        }

        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        return opcion;
}
int sumarNumeros(int a, int b)
{
    int sumar;
    sumar=a+b;
    return sumar;
}
int restarNumeros(int a, int b)
{
    int restar;
    restar=a-b;
    return restar;
}

float dividirNumeros(int a, int b)
{
    float dividir;
    dividir=(float) a/(b);
    return dividir;
}
int multiplicarNumeros(int a, int b)
{
    int multiplicar;
    multiplicar=a*b;
    return multiplicar;
}

long  int factorialNumeros(int a)
 {
    int factorial=1;
    int i;

    for( i = 1; i<=a; i++)
    {

        factorial=factorial*i;
    }
    return factorial;
 }
