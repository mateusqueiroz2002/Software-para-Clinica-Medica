#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int opcao,opcao1,opcao2,opcao3,opcao4,i,quant;

int main()
{
    setlocale(LC_ALL, "Portuguese");


    struct referencia{
        char nome0[50],nome1[50], nome2[50],nome3[50],nome4[50];

    }
    VC[500];
    VC[500];
    VC[500];
    VC[500];
    VC[500];
    VC[500];
    VC[500];

    char login[5]= "Admin";
    printf(" Login: ");
    gets(login);
    char senha[5]= "12345";
    printf(" Senha: ");
    gets(senha);
    printf("Confirme a senha: ");
    scanf("%d", &opcao3);




    switch(opcao3){
    case 12345:
        while(opcao!=5){
            while (opcao2!=1){
                system("cls");

                printf("\n\t\t ** Bem vindo a clinica Viver e Cuidar ** \n\n");
                printf(" Escolha uma opção abaixo: \n\n");
                printf(" 1 - Cadastrar  \n");
                printf(" 2 - Buscar paciente \n");
                printf(" 3 - Excluir dados \n");
                printf(" 4 - Informações do sistema \n");
                printf(" 5 - Sair \n\n");
                printf(" \n Qual opção você deseja acessar? ");
                scanf("%d", &opcao);

                switch (opcao){
                case 1:
                    for(i=1;1<=2;i++){
                        system("cls");
                        printf(" \n Cadastramento %d\n", i);
                        printf("\n Nome do paciente: ");
                        fflush(stdin);
                        scanf("%[^\n]s",  VC [i].nome0);
                        printf("\n Telefone do paciente: ");
                        fflush(stdin);
                        scanf("%[^\n]s", VC [i].nome1);
                        printf("\n CPF do paciente: ");
                        fflush(stdin);
                        scanf("%[^\n]s", VC [i].nome2);
                        printf("\n Cidade do paciente: ");
                        fflush(stdin);
                        scanf("%[^\n]s", VC [i].nome3);
                        printf("\n\n\t\t");
                        system("pause");
                        system("cls");
                        if (i <= 2){
                            printf("Cadastro feito com sucesso!");
                            break;
                        }
                        break;

                    }
                    break;

                case 2:
                    system("cls");

                    for(i=1;i<=2;i++){
                        system("cls");
                        printf(" Dados do cadastro %d\n", i);
                        printf(" Nome do paciente: %s\n", VC[i].nome0);
                        printf(" Telefone do paciente: %s\n", VC[i].nome1);
                        printf(" CPF do paciente: %s\n", VC[i].nome2);
                        system("pause");
                    }
                    break;

                case 3:
                    system("cls");

                    for(i=1;i<=1;i++){
                            printf(" Excluir cadastro \n\n");
                            printf(" 1 - Nome do paciente\n");
                            printf(" 2 - Telefone do paciente\n");
                            printf(" 3 - CPF do paciente\n");
                            printf(" 4 - Excluir todos os dados \n\n");
                            printf(" Qual opção voce deseja acessar? \n");
                            scanf("%d", &opcao4);
                       switch(opcao4){
                        case 1:
                            for(i=1;i<=1;i++){
                                system("cls");
                                memset(&VC [i].nome0,0,sizeof(VC [i].nome0));
                                printf(" Nome do paciente excluido com sucesso!\n");
                                system("pause");
                            }
                            break;

                        case 2:
                            for (i=1;i<=1;i++)
                            {
                                system("cls");
                                memset(&VC [i].nome1,0,sizeof(VC [i].nome1));
                                printf(" Telefone do paciente excluido com sucesso!\n");
                                system("pause");
                            }
                            break;

                        case 3:
                            for (i=1;i<=1; i++)
                            {
                                system("cls");
                                memset(&VC [i].nome2,0,sizeof(VC [i].nome2));
                                printf("CPF do paciente excluido com sucesso!\n");
                                system("pause");
                            }
                            break;

                        case 4:
                            for (i=1;i<=1; i++)
                            {
                                system("cls");
                                memset(&VC [i].nome0,0,sizeof(VC [i].nome0));
                                memset(&VC [i].nome1,0,sizeof(VC [i].nome1));
                                memset(&VC [i].nome2,0,sizeof(VC [i].nome2));
                                printf("Todos os Dados do paciente foram Excluidos com sucesso!\n");
                                system("pause");
                            }
                            break;
                        }
                    }

                    break;

                case 4:
                    system("cls");
                    printf("Este software foi desenvolvido com o intuito de facilitar o cadastramento e a busca por pacientes no nosso sistema, para melhor atendimento aos pacientes.\n\n");
                    printf("Desenvolvedores e Analistas do Software:\n");
                    printf("Mateus Costa Queiroz - RA:N6400E6\n");
                    printf("Thiago Pereira de Souza - RA:N582HF9\n");
                    printf("Pablo Luan Martins de Oliveira - RA:F282GA1\n");
                    printf("Henrique Custodio Campos - RA:N584GC0\n\n");
                    printf("Direitos Reservados de uso restrito da empresa.\n");;
                    printf("\t\tCopyRight@2020 \n\n");

                    system("pause");
                    break;



                case 5:
                    system("cls");
                    printf("\n Voce realmente Deseja Sair do Sistema da Clinica Viver e Cuidar?\n\n");
                    printf(" 1- Sim\n 2- Nao");
                    printf("\n\n");
                    scanf("%d",&opcao2);

                    switch(opcao2)
                    {
                        case 1:
                        system("cls");
                        printf("\n\n Volte Sempre a Clinica Viver e Cuidar! \n\n");
                        system("pause");
                        return 0;
                        break;
                    }

                    break;





                }


            }
        }
    }

    return 0;

}