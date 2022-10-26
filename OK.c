#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define tam 2

typedef struct 
{
    char *nome;
    char *numero; 
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

void push(Registro* v, int i)
{
    v[i].nome = malloc(30);
    v[i].numero = malloc(6);
    scanf("%s", v[i].nome);
    scanf("%s", v[i].numero);
       
}

void imprime(Registro* v, int i) {
    for (int j = 0; j < i; j++) {
        printf("Nome: %s | ", v[j].nome);
        printf("Numero: %s\n", v[j].numero);
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

int main() {
    int i = 0, opc;
    Registro alunos[10];
    while ( 1 ) 
    {
        printf("O que voce deseja ? (1)Inserir (2)Imprimir (3)Sair\n");
        scanf("%d", &opc);
        switch(opc) 
        {       
            case 1:
                push(alunos, i);
                i++;
                break;
            case 2:
                imprime(alunos, i);
                break;
            case 3:
                return 0;
                break;
        } 
    }
    return 0;
}
