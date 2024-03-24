#include <stdio.h>
#include <stdlib.h>

#include "algorithms/fibonacci.c"
#include "algorithms/powerNumber.c"
#include "algorithms/switchValues.c"
#include "algorithms/stack.c"

void menu(){

    printf("\n\n>>>>>Hub principal<<<<<\n\n");

    printf("Escolha uma opcao:\n");
    printf("0 - Finalizar\n1 - Exponenciacao\n");
    printf("2 - Casa Fibonacci\n3 - Trocar valores com ponteiro\n");
    printf("4 - Pilha\n");
    printf("...\n");
    printf(">");
       
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
            case 4:
                stackOperation();
                break;
            default:
                printf("Operacao nao encontrada");
        }

    }

    return 0;

}