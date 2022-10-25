#include <stdio.h>
#include <stdlib.h>

/*
            Aula 174: Como criar um vetor de struct?

            Código escrito por Wagner Gaspar
            Abril de 2021
*/

typedef struct{
    int dia, mes, ano;
}DataNas;

typedef struct{
    DataNas dataNas;
    int idade;
    char nome[100];
    char sexo;
}Pessoa;

// Procedimento para imprimir os dados de uma Pessoa
void imprimirPessoa(Pessoa p){
    printf("\n\tNome: %s", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tData de nas.: %d/%d/%d\n\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
    printf("\tSexo: %c\n", p.sexo);
}

// função que lê os dados de uma pessoa e retorna para quem chamou
Pessoa lerPessoa(){
    Pessoa p;
    printf("\nDigite seu nome: ");
    fgets(p.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &p.idade);
    printf("Digite sua data de nascimento no formato dd mm aaaa:");
    scanf("%d%d%d", &p.dataNas.dia, &p.dataNas.mes, &p.dataNas.ano);
    printf("Digite f ou m para o sexo:");
    scanf("%c", &p.sexo);
    return p;
}

int main() {
    int i;
    Pessoa pessoas[1];

    for(i = 0; i < 2; i++)
        pessoas[i] = lerPessoa();

    for(i = 0; i < 2; i++)
        imprimirPessoa(pessoas[i]);

    return 0;
}