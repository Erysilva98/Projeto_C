#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

typedef struct cel
{
    int valor;
    struct cel *prox;   

}Celula;

typedef struct 
{
    Celula *topo;

}Pilha;

Celula *novo(int valor)
{
    Celula *v = (Celula *) malloc(sizeof(Celula));
    v->valor = valor;
    v->prox = NULL;
    return v;
}

Pilha *iniciar()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = 0;
    return p;
}

void empilhar(Pilha *p, int num)
{
    Celula *v = novo(num);

    v->prox = p->topo;
    p->topo = v;
}

int desempilha(Pilha *p)
{
    Celula *n;
    int temp;

    n = p->topo;
    temp = n->valor;
    p->topo = n->prox;
    free(n);

    return temp;
}

int topo(Pilha *p)
{
    return p->topo->valor;
}

void listaPilha(Pilha *p)
{
    Celula *n = p->topo;

    if(n == NULL)
    {
        printf("\n Pilha Vazia \n");
        return;
    }
    else
    {
        while(n != NULL)
        {
            printf(" %d ", n->valor);
            n = n->prox;
        }
        printf("\n");
    }
}

int main()
{
    int i, op, tam, num;
    Pilha *p;

	while( 1 ){ 

        printf("\n1- INIT e PUSH ");
		printf("\n2- Lista Pilha");
        printf("\n3- POP - Remover e Lista ");   
        printf("\n4- Ordenar e Exibir"); 
        printf("\n5- Sair");
		printf("\n\n Opcao? ");
		scanf("%d", &op);

		switch (op){

            // Criar e Adicionar
            case 1: 
                printf("\nFunção INIT e PUSH \n");
                printf("Informe o Tamanho do Vetor: ");
                scanf("%d", &tam);

                p = iniciar();

                if(p)
                {
                   printf("\n Memoria Alocada com Sucesso \n\n");
                   for(i = 0; i<tam; i++)
                   { 
                        num = rand() % 100;
                        printf("%d ",num);
                        empilhar(p,num);
                        
                    }      
                    printf("\n");           
                }
                else
                {
                    printf("\n Erro de Alocacao de Memoria \n");
                }
                break;

            // Exibir Pilha Criada 
            case 2:
            {
                printf("\nListando a Pilha Criada\n\n");
                listaPilha(p); 
                break;
            }

            // Remover intem da Pilha
            case 3:
            {
                printf("\nFunção POP - Remover intem do Topo na Pilha\n\n");
                
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





                