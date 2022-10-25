#include <stdio.h>
#include <stdlib.h>

#define tam 10

typedef struct 
{
    int topo;
    int vetor[tam];
} Pilha;

Pilha *novaPilha();
void adiciona (Pilha *p, int num);
int remover(Pilha *p);
int topo(Pilha *p);
int pilhaVazia(Pilha *p);
int pilhaCheia(Pilha *p);

int main()
{
    Pilha *n;

    n = novaPilha();

    if(pilhaVazia(n))
    {
        printf("Pilha Vazia! \n");
    }
    if(!pilhaCheia(n))
    {
        printf("Pilha Cheia! \n");
    }

}

Pilha *novaPilha()
{
    Pilha *n = (Pilha *) malloc(sizeof(Pilha));
    n->topo = 0;
    return n;
}

void adiciona (Pilha *p, int num)
{
    if(pilhaCheia(p))
    {
        printf("Pilha Cheia! \n");
        return -1;
    }
    p->vetor[p->topo] = num;
    p->topo++;
}

int remover(Pilha *p)
{
    if(pilhaVazia(p))
    {
        printf("Pilha Vazia! \n");
        return -1;
    }
    p->topo = p->topo -1;
    return p;  
}

int topo(Pilha *p)
{
    if(pilhaVazia(p))
    {
        printf("Pilha Vazia! \n");
        return -1;
    }
    return p->vetor[p->topo - 1];
}

int pilhaCheia(Pilha *p)
{
    return p->topo == tam;
}

int pilhaVazia(Pilha *p)
{
    return p->topo == 0;
}
