int fibonacci(int quantity){

    if(quantity == 0){
        return 0;
    }else if(quantity == 1){
        return 1;
    }
    
    return fibonacci(quantity-1) + fibonacci(quantity-2);

}

int fibonacciOperation(){

    int quantity = 0;

    printf("\n\n>>>>>Fibonacci<<<<<\n\n");

    printf("Casa do fibonnaci: ");
    scanf("%i", &quantity);

    printf("\nO valor da casa %i de fibonacci e: %i\n", quantity, fibonacci(quantity));

}

