#include<stdio.h>

float sumar(float a, float b){
        return a + b;
    }

float restar (float a, float b){
    return a-b;
}

float multiplicacion (float a, float b){
    return a*b;
}

float division(float a, float b){
    return a/b;
}

int main (void){

    float a, b;
  


        int opcion = 0;
     while(opcion != 5){

    printf("\n--Calculadora--\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4.dividir\n");
    printf("5. salir\n");
    printf("Seleccione su opcion: ");
    scanf("%d", &opcion);


   


    switch (opcion){
        case 1:
        printf("que sumamos?\n");
        scanf("%f" "%f", &a, &b);
        float rde_suma = sumar(a, b);
        printf("%f\n", rde_suma);
        break;

        case 2:
        printf("que restamos?\n");
        scanf("%f" "%f", &a, &b);
        float rde_resta = restar(a, b);
        printf("%f\n", rde_resta);
        break;

        case 3:
        printf("que multiplicamos?\n");
        scanf("%f" "%f", &a, &b);
        float rde_multi = multiplicacion(a, b);
  printf("%f\n", rde_multi);
        break;

        case 4:
        printf("que dividimos?\n");
        scanf("%f" "%f", &a, &b);

        if (b != 0){
        float rde_diviion = division(a, b);
        printf("%f\n", rde_diviion);
        }

        else (b == 0);{
            printf ("no se puede con eso");
                }


        break;

        case 5:
        printf("saliendo :,v");
        break;

          default:
                printf("Opcion invalida\n");
                break;

        


    }
    }
    return 0;
    
}