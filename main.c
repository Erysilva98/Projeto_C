#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define tam 2

typedef struct 
{
    int cod;
    float media;
    
}Registro;

typedef struct 
{
    int topo;
    int pos;
}Pilha;

Pilha *init()
{
    Pilha *lista = (Pilha *) malloc(sizeof(Pilha));
    lista->topo = 0;
    return lista;
}

void push(Pilha *p, Registro v[])
{
    int i; 

    for(i=0; i<tam; i++)
    {
        printf("\n");
        printf(" Digite o Código do aluno: ");
        scanf("%d%*c", &v[i].cod);
        printf(" Digite a Media do aluno: ");
        scanf("%f%*c", &v[i].media);   
        printf("\n---------\n");           
    }
}

int pilhaCheia(Pilha *p)
{
    return p->topo == tam;
}

int pilhaVazia(Pilha *p)
{
    return p->topo == 0;
}

int main()
{
    Pilha *lista;
    Registro info[tam];

    lista = init();

    push(lista,info);

    return 0;
}