float powerNumber(float number, int x){

    if(x == 1){
        return number;
    }else if(x == 0){
        return 1;
    }

    return powerNumber(number, x-1) + number;

}

void powerNumberOperation(){

    int x = 0;
    float number = 0;

   printf("\n\n>>>>>Potencia de um número<<<<<\n\n");

    printf("Digite o valor da base: ");
    scanf("%f", &number);
    
    printf("Digite o valor do expoente: ");
    scanf("%i", &x);

    printf("\n%.2f elevado a %i e igual a %.2f\n", number, x, powerNumber(number, x));

}