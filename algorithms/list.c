typedef struct listItem {
    struct listItem* nextItem;
    int id;
} ListItem;

int emptyList(ListItem *list){
    return list == NULL;
}

void addItemList(ListItem *list){
    
    ListItem *newItem = (ListItem*)(malloc(sizeof(ListItem)));
    
    printf("Digite o id do Item: ");
    scanf("%i", &newItem->id);
        
    if(emptyList(list)){
        
        newItem->nextItem = NULL;
        
    }else{

        ListItem *aux = list;
        
        while(aux->nextItem != NULL){
            aux = aux->nextItem;
        }
        
        aux->nextItem = newItem;
        
    }
    
}

void listItemList(ListItem *list){
    
    if(emptyList(list)){
        
        printf("Lista Vazia\n");
        
    }else{
        
        ListItem *aux = list;
            
        while(aux != NULL){
            
            printf("Código: %i\n", aux->id);
            printf("Endereço: %p\n\n", aux);

            aux = aux->nextItem;
        }
        
    }
    
}

void removeItemList(ListItem *list){
    
    if(emptyList(list)){
        
        printf("Lista Vazia\n");
        
    }else{
        
        ListItem *aux = list;
        ListItem *previousItem;
        int itemId;

        printf("Digite o id do Item: ");
        scanf("%i", &itemId);

        while(aux != NULL){
            
            if(aux->id == itemId){
                
                previousItem->nextItem = aux->nextItem;
                printf("Removendo item com código %i\n\n", itemId);
                free(aux);
                break;
                
            }else{
                
                previousItem = aux;
                aux = aux->nextItem;
                
            }
            
        }
        
    }
    
}

int listOperation(){

    int operation;
    ListItem *list = NULL;
    
    printf("\n\n>>>>>Lista<<<<<\n\n");
    
    do{
        
        printf("Escolha uma opcao:\n0 - Sair\n1 - Criar Lista\n2 - Adicionar\n3 - Remover\n4 - Listar\n>");
        scanf("%i", &operation);
        
        switch(operation){
            case 0:
                printf("Saindo do Algoritmo de Pilha..");
                break;
            case 1:
                addItemList(list);
                break;
            case 2:
                removeItemList(list);
                break;
            case 3:
                listItemList(list);
                break;
            default:
                printf("Operaçao nao existente\n");
        }
        
    }while(operation != 0);
    
    return 0;

}

