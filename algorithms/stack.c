typedef struct stackItem {
    struct stackItem* nextItem;
} StackItem;

typedef struct stack {
    StackItem* top;
} Stack;

int isEmptyStack(Stack *stack){
    return stack->top == NULL;
}

void topStack(Stack *stack){
    
    if(isEmptyStack(stack)){
        
        printf("Pilha vazia\n\n");
        
    }else{
        
        printf("Item no topo:\n");
        printf("Endereco (Hexadecimal): %p\n", stack->top);
        printf("Endereco proximo Item (Hexadecimal): %p\n\n", stack->top->nextItem);
        
    }
    
}

void push(Stack* stack){
    
    StackItem *item = (StackItem*)(malloc(sizeof(StackItem)));
    
    item->nextItem = isEmptyStack(stack) ? NULL : stack->top;
    stack->top = item;
    
    topStack(stack);
    
}

void pop(Stack* stack){
    
    if(isEmptyStack(stack)){
        
        printf("Pilha vazia\n\n");
        
    }else{

        StackItem *itemTop = stack->top;
        stack->top = stack->top->nextItem;
        free(itemTop);

    }
    
    topStack(stack);
    
}

void list(Stack* stack){

    StackItem *item = stack->top;
    
    if(isEmptyStack(stack)){
        
        printf("Pilha vazia\n\n");
        
    }else{
        
        while(item != NULL){
            
            printf("Endereco (Hexadecimal): %p\n", item);
            printf("Endereco proximo Item (Hexadecimal): %p\n\n", item->nextItem);
            
            item = item->nextItem;
        
        }
        
    }

}

int stackOperation(){

    int operation;
    Stack stack = {NULL};
    
    printf("\n\n>>>>>Pilha<<<<<\n\n");
    
    do{
        
        printf("Escolha uma opcao:\n0 - Sair\n1 - Push\n2 - Pop\n3 - Listar\n>");
        scanf("%i", &operation);
        
        switch(operation){
            case 0:
                printf("Saindo do Algoritmo de Pilha..");
                break;
            case 1:
                push(&stack);
                break;
            case 2:
                pop(&stack);
                break;
            case 3:
                list(&stack);
                break;
            default:
                printf("Operaçao nao existente\n");
        }
        
    }while(operation != 0);
    
    return 0;

}

