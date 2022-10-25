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

// Função POP
void desempilhar(Pilha *p)
{
    Celula *cel = NULL;

    if(p->topo != NULL)
    {
        cel = p->topo;
        p->topo = cel->prox;
        p->pos--;
    }
    else
    {
        printf("\n Pilha Vazia \n");
    }
}


// Função Imprimir Pilha
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
    Pilha *p;
    p->pos = 0;
    p->topo = NULL;
    Celula *cel;

	while( 1 ){ 

        printf("\n1- Função INIT e PUSH ");
		printf("\n2- Função para Lista Pilha");
        printf("\n3- Função POP - Remover e Lista ");   
        printf("\n4- Função Ordenar e Exibir"); 
        printf("\n5- Sair");
		printf("\n\n Opcao? ");
		scanf("%d", &op);

		switch (op){

            // Criar e Adicionar
            case 1: 
                printf("\nFunção INIT e PUSH \n");
                printf("Informe o Tamanho do Vetor: ");
                scanf("%d", &tam);

                Pilha *cel = (Pilha*) malloc(sizeof(Pilha));

                if(cel)
                {
                   printf("\n Memória Alocada com Sucesso \n\n");
                   for(i = 0; i<tam; i++)
                   { 
                        num = rand() % 100;
                        printf("%d ",num);
                        empilhar(cel,num);
                    }      
                    printf("\n");            
                }
                else
                {
                    printf("\n Erro de Alocação de Memória \n");
                }
                break;

            // Exibir Pilha Criada 
            case 2:
            {
                printf("\nListando a Pilha Criada\n\n");
                listaPilha(cel);
                break;
            }

            // Remover intem da Pilha
            case 3:
            {
                printf("\nFunção POP - Remover intem do Topo na Pilha\n\n");
                desempilhar(cel);
                listaPilha(cel);
                break;
            }

            // Ordenação Merge Sort  "Desistir"
            case 4: 
            {
                printf("\nMerge Sort \n");
                break;
            }

            // Sair
            case 5: 
                printf("\nSaindo ...\n");
                exit(0);

			default: printf( "\nOPCAO INVALIDA! \n" ); 
		}
	}
    return 0;
}


// Merge Sort





                