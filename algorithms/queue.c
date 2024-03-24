typedef struct queueItem {
    struct queueItem* nextItem;
} QueueItem;

typedef struct queue {
    QueueItem* first;
} Queue;

int isEmptyQueue(Queue *queue){
    return queue->first == NULL;
}

void enqueue(Queue* queue){
    
    QueueItem *item = (QueueItem*)(malloc(sizeof(QueueItem)));
    
    if(isEmptyQueue(queue)){
        
        queue->first = item;
        item->nextItem = NULL;
       
    }else{
        
        QueueItem *aux = queue->first;
        
        while(aux->nextItem != NULL){
            aux = aux->nextItem;
        }
        
        aux->nextItem = item;
        
    }

    printf("Item adicionado na fila no endereco %p\n", item);
    printf("Item esta antes do endereco: %p\n\n", item->nextItem);
    
}

void dequeue(Queue* queue){
    
    if(isEmptyQueue(queue)){
    
        printf("Fila vazia\n\n");
        
    }else{
        
        printf("Item removido da fila no endereco %p\n\n", queue->first);
        QueueItem *aux = queue->first;
        free(queue->first);
        queue->first = aux->nextItem;
        
    }
    
}

void listQueue(Queue* queue){

    if(isEmptyQueue(queue)){
    
        printf("Fila vazia\n\n");
        
    }else{
       
        QueueItem *item = queue->first;
        int stop = 0;
        
        while(stop == 0){
            
            printf("Endereco (Hexadecimal): %p\n", item);
            printf("Endereco proximo Item (Hexadecimal): %p\n\n", item->nextItem);
            
            if(item->nextItem != NULL){
                item = item->nextItem;
            }else{
                stop = 1;
            }
            
        }
        
    }

}

int queueOperation(){

    int operation;
    Queue queue = {NULL};
    
    printf("\n\n>>>>>Fila<<<<<\n\n");
    
    do{
        
        printf("Escolha uma opcao:\n0 - Sair\n1 - Enqueue\n2 - Dequeue\n3 - Listar\n>");
        scanf("%i", &operation);
        
        switch(operation){
            case 0:
                printf("Saindo do Algoritmo de Fila..");
                break;
            case 1:
                enqueue(&queue);
                break;
            case 2:
                dequeue(&queue);
                break;
            case 3:
                listQueue(&queue);
                break;
            default:
                printf("Operaçao nao existente\n");
        }
        
    }while(operation != 0);
    
    return 0;

}

