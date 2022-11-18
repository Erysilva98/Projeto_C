#include <stdio.h>
#include <stdlib.h>

#define tam 1

//Cursos
#define INFORMATICA 0
#define AGROINDUSTRIA 1
#define AGROPECUARIA 2
#define ENG_SOFTWARE 3
#define ENFERMAGEM 4
#define MUSICA 5

typedef int Tipo_Identificador;

typedef struct
{
    Tipo_Identificador identificador;
    char nome[50];
    char matricula[50]; 
    int idade;
    int periodo;
    int curso;
}Registro_Aluno;

typedef struct
{
    Registro_Aluno aluno;
    int dia;
    int mes;
    int ano;
    int qtd_alunos;

}Fila_do_Dia;

typedef struct 
{
    int qtd_filas;
    Fila_do_Dia *filas;
}Colecao_Filas;

//  Declaração de Funções
void iFilaDia(Fila_do_Dia *f);
void iColecaoFila(Colecao_Filas *c);
void imprimir(Fila_do_Dia p);

Fila_do_Dia adiciona(void)
{
    Fila_do_Dia p;

    printf("\nDigite a Data formato dd mm aaaa: ");
    scanf("%d%d%d", &p.dia, &p.mes, &p.ano);
    printf("\nNumero de Identificacao : ");
    scanf("%d",&p.aluno.identificador);
    printf("\nInforme o Nome : ");
    scanf("%s",&p.aluno.nome);
    printf("\nInforme a Matricula : ");
    scanf("%s",&p.aluno.nome);
    fgets(p.aluno.matricula, 50, stdin);
    printf("\nDigite a Idade: ");
    scanf("%d",&p.aluno.idade);
    printf("\nInforme o Periodo : ");
    scanf("%d",&p.aluno.periodo);
    printf("\nCurso\n");
    printf("%2d - AGROPECUARIA\n", INFORMATICA);
    printf("%2d - AGROINDUSTRIA\n", AGROINDUSTRIA);
    printf("%2d - AGROPECUARIA\n", AGROPECUARIA);   
    printf("%2d - ENG_SOFTWARE\n", ENG_SOFTWARE);
    printf("%2d - ENFERMAGEM\n", ENFERMAGEM);
    printf("%2d - MUSICA\n", MUSICA);
    printf("Opcao: ");
    scanf("%d",&p.aluno.curso);
}

void removeUltimo(Fila_do_Dia p)
{
    if(p.qtd_alunos > 0)
    {
        p.qtd_alunos--;
        printf("Elemento Removido na Posicao: %d",p.qtd_alunos);
    }
    else
    {
        printf("Operacao frustrada - pilha vazia...\n\n");
    }
}

int main()
{
    int i;
    Fila_do_Dia cad[tam];
    Fila_do_Dia f;
    f.qtd_alunos = 0;

    printf("____ Refeitorio do IFPE ___\n");
    printf("\n");
    for(i=0; i <tam; i++)
    {
        f.qtd_alunos = i;
        cad[i] = adiciona();
    }
    printf("\n");
    for(i=0; i <tam; i++)
    {
        imprimir(cad[i]);
    }
    return 0;

}

void imprimir(Fila_do_Dia p){
    printf("\n\tData de Registro : %d/%d/%d",p.dia, p.mes, p.ano);
    printf("\n\tNumero de Identificacao : %d",p.aluno.identificador);
    printf("\n\tNome : %s",p.aluno.nome);
    printf("\n\tMatricula : %s",p.aluno.matricula);
    printf("\n\tIdade: %d",p.aluno.idade);
    printf("\n\tPeriodo : %d",p.aluno.periodo);
    printf("\n\tCurso : %d",p.aluno.curso);
    printf("\n");
}

// Init Fila do Dia
void iFilaDia(Fila_do_Dia *f)
{
    Fila_do_Dia fila;
    fila.dia = 0;
    fila.mes = 0;
    fila.ano = 0;
    fila.qtd_alunos = 0;
}

// Init Coleção de Fila
void iColecaoFila(Colecao_Filas *c)
{
    Colecao_Filas cfilas;
    cfilas.qtd_filas = 0;
    cfilas.filas = 0;
}

/* 

Fila_do_Dia adiciona()
{
    Fila_do_Dia ifpe;
    printf("\nNumero de Identificacao : ");
    scanf("%d",&ifpe.aluno->identificador);
    printf("\nInforme o Nome : ");
    scanf("%s",&ifpe.aluno->nome);
    printf("\nInforme a Matricula : ");
    scanf("%s",&ifpe.aluno->matricula);
    printf("\nDigite a Idade: ");
    scanf("%d",&ifpe.aluno->idade);
    printf("\nInforme o Periodo :");
    scanf("%d",&ifpe.aluno->periodo);
    printf("\nCurso\n");
    printf("%2d - AGROPECUARIA\n", INFORMATICA);
    printf("%2d - AGROINDUSTRIA\n", AGROINDUSTRIA);
    printf("%2d - AGROPECUARIA\n", AGROPECUARIA);   
    printf("%2d - ENG_SOFTWARE\n", ENG_SOFTWARE);
    printf("%2d - ENFERMAGEM\n", ENFERMAGEM);
    printf("%2d - MUSICA\n", MUSICA);
    printf("Opcao: ");
    scanf("%d",&ifpe.aluno->curso);


    return ifpe;
}


    f->aluno->identificador = cad->identificador;
    f->aluno->nome = cad->nome;
    f->aluno->matricula = cad->matricula;
    f->aluno->idade = cad->idade;
    f->aluno->periodo = cad->periodo;
    f->aluno->curso = cad->curso;
    f->aluno++;


*/