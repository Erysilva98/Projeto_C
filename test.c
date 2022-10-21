 Pessoa user;

    user.idade = 22;
    user.sexo = 'M';
    strcpy(user.nome,"Erimilson");

    printf("Nome: %s\nIdade: %d\nSexo; %c\n: ", user.nome, user.idade, user.sexo);


    
    printf("Informe o Tamanho do Vetor: ");
    scanf("%d", &tam);

    vetor = malloc (tam * sizeof(int));

    if (vetor)
    {
        printf("\n Memória Alocada com Sucesso \n");
        for(i = 0; i<tam; i++)
        { *(vetor + i) = rand() % 100; }

        exit(0);
    }
    else { printf("\n Erro de Alocação de Memória \n"); }


            for(i = 0; i<tam; i++)
        {printf("%d ", *(vetor + i));
           
        }
        printf("\n");