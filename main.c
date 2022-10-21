#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

typedef struct cel
{
    int valor;
    struct  cel *prox;
} Celula;

typedef struct 
{
    Celula *topo;
    int pos;
}Pilha;

// Função Push
void empilhar(Pilha *p, int num)
{
    Celula *cel = malloc(sizeof(Celula));

    cel->valor = num;
    cel->prox = p->topo;
    p->topo = cel;
    p->pos++;
}

void listaPilha(Pilha *p)
{
    Celula *cel = p->topo;

    if(cel == NULL)
    {
        printf("\n Pilha Vazia \n");
        return;
    }
    else
    {
        while(cel != NULL)
        {
            printf(" %d ", cel->valor);
            cel = cel->prox;
        }
        printf("\n");
    }
}

int main()
{
    int i, op, tam, num;

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

                Pilha *cel = (Pilha*) malloc(sizeof(Pilha));

                if(cel)
                {
                   printf("\n Memória Alocada com Sucesso \n");
                   for(i = 0; i<tam; i++)
                   { 
                        num = rand() % 100;
                        empilhar(cel,num);
                    }                  
                }
                else
                {
                    printf("\n Erro de Alocação de Memória \n");
                }

                break;

            case 2:
            {
                listaPilha(cel);
                break;
            }

            case 4: // Sair
                exit(0);

			default: printf( "\nOPCAO INVALIDA! \n" ); 
		}
	}
    return 0;
}


                