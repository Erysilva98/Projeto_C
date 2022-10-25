#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

typedef struct novo
{
    int dado;
    struct novo *prox;
    
}novo;

typedef struct Pilha
{
    novo *topo;
    int tam;

}Pilha;

void iniciarPilha(Pilha *p)
{
    p->topo = NULL;
}

void Adicionar (int dado, Pilha *p)
{
    novo *ptr = (novo*) malloc(sizeof(novo));

    if (ptr == NULL)
    {
        printf("\n Erro ao Adicionar. \n");
        return;
    }
    else
    {
        ptr->dado = dado;
        ptr->prox = p->topo;
        p->topo = ptr;
        p->tam++;

    }
}

int Remover (Pilha *p)
{
    novo* ptr = p->topo;
    int dado;

    if(ptr == NULL)
    {
        printf("\n Pilha Vazia \n");
    }
    else
    {
        p->topo = ptr->prox;
        ptr->prox = NULL;
        dado = ptr->dado;
        free(ptr);
        return dado;
    }
}

void listaPilha(Pilha *p)
{
    novo *ptr = p->topo;

    if(ptr == NULL)
    {
        printf("\n Pilha Vazia \n");
        return;
    }
    else
    {
        while(ptr != NULL)
        {
            printf(" %d ", ptr->dado);
            ptr = ptr->prox;
        }
        printf("\n");
    }
}

int main()
{
    int i, op, tam, *vetor, num;

	while( 1 ){ 

        printf("\n1- Criar Array Dinamico");
		printf("\n2- Lista Pilha");
        printf("\n4- Sair");
		printf("\n Opcao? ");
		scanf("%d", &op);

		switch (op){

            case 1: // Criar 
                printf("\nFunção INIT \n");
                printf("Informe o Tamanho do Vetor: ");
                scanf("%d", &tam);

                Pilha *vetor = (Pilha*) malloc(sizeof(Pilha));

                if(vetor)
                {
                   printf("\n Memória Alocada com Sucesso \n");
                   for(i = 0; i<tam; i++)
                   { 
                        num = rand() % 100;
                        iniciarPilha(vetor);
                        Adicionar(num,vetor);
                    }    
                    listaPilha(vetor);               
                }
                else
                {
                    printf("\n Erro de Alocação de Memória \n");
                }

                break;

            case 2:
            {
                listaPilha(vetor);
                break;
            }

            case 4: // Sair
                exit(0);

			default: printf( "\nOPCAO INVALIDA! \n" ); 
		}
	}
    return 0;
}