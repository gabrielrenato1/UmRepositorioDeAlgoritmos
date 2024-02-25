#include <stdio.h>

#include "algorithms/fibonacci.c"
#include "algorithms/powerNumber.c"
#include "algorithms/switchValues.c"

void menu(){

    printf("Escolha uma opcao:\n");
    printf("0 - Finalizar\n1 - Exponenciacao\n");
    printf("2 - Casa Fibonacci\n3 - Trocar valores com ponteiro\n");
    printf("...\n\n");
    printf("Operacao: ");
       
}

int main(){

    int operation = 1;

    while(operation != 0){

        menu();
        scanf("%i", &operation);

        switch (operation){
            case 0:
                printf("Adeus :^)");
                break;
            case 1:
                powerNumberOperation();
                break;
            case 2:
                fibonacciOperation();
            case 3:
                switchValuesOperation();
                break;
            default:
                printf("Operacao nao encontrada");
        }

    }

    return 0;

}