typedef struct node {
   int value;
   struct node *left;
   struct node *right;
} Node;

int isEmptyTree(Node *node){
    return node == NULL;
}

Node* insertNode(Node *node, int value){
    
    if(isEmptyTree(node)){
        
        node = (Node*) malloc(sizeof(Node));
        node->value = value;
        node->left = NULL;
        node->right = NULL;
        
    }else if(value < node->value){
        node->left = insertNode(node->left, value);
    }else{
        node->right = insertNode(node->right, value);
    }
    
    return node;
    
}

int binarySearch(Node *node, int value){
    
    if(value == node->value){
        
        printf("Valor %i encontrado na arvore\n", value);
        return 1;
        
    }else if(value < node->value){
        
        return binarySearch(node->left, value);
        
    }else if(value > node->value){
        
        return binarySearch(node->right, value);
        
    }if(isEmptyTree(node)){

        printf("Arvore vazia\n");
        return 0;

    }else{
        
        printf("Valor %i não encontrado na arvore\n", value);
        return 0;
        
    }
    
}


int binaryTreeOperation(){

    printf("\n\n>>>>>Arvore binária<<<<<\n\n");

    int operation, value;
    Node *root = NULL;

    do{
        
        printf("Escolha uma opcao:\n0 - Sair\n1 - Inserir\n2 - Buscar\n>");
        scanf("%i", &operation);
        
        switch(operation){
            case 0:
                printf("Saindo do Algoritmo de Arvore..");
                break;
            case 1:
                printf("Digite o valor a ser inserido:");
                scanf("%i", &value);

                if(isEmptyTree(root)){
                    root = insertNode(root, value);
                }else{
                    insertNode(root, value);
                }
                
                break;
            case 2:
                printf("Digite o valor a ser procurado:");
                scanf("%i", value);
                binarySearch(root, &value);
                break;
            default:
                printf("Operaçao nao existente\n");
        }
        
    }while(operation != 0);
    
    return 0;

}

