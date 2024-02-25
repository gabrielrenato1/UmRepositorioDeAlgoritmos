float switchValues(float *a, float *b){

    float aux;
    
    aux = *b;
    *b = *a;
    *a = aux;

}

void switchValuesOperation(){

    float x = 0, y = 0;
    
    printf("Digite o valor de X: ");
    scanf("%f", &x);
    
    printf("Digite o valor de Y: ");
    scanf("%f", &y);
    
    printf("\nValores Antes: X = %.2f; Y = %.2f", x, y);
    
    switchValues(&x, &y);
    
    printf("\nValores Depois: X = %.2f; Y = %.2f\n", x, y);

}