#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){
    setlocale(LC_ALL,"portuguese");

    int opMedicos, diaConsulta, horarioConsulta, opSite;
    char nome[50];
    int cpf[11], phone[11];
    int i;
    char alergia, medicamentoAlergico[20];

    printf("\t\t\tClinica São Luís\n");
    printf("\n");
    printf("Aqui você pode ver nossos especialistas e agendar um atendimento\n");
    printf("\n");

    printf("O que deseja fazer em nosso site ? \n");
    printf("\n1 para ver especialistas \n");
    printf("2 para agendar um horário com especialista \n");
    printf("\nDigite sua opção: ");
    scanf("%d",&opSite);

    if(opSite == 1) {
        printf("\n1 Dentista\n");
        printf("2 Neurologista\n");
        printf("3 Psicologo\n");
        printf("4 Pediatra\n");
        printf("\n");
        printf("Deseja agendar sua consulta com algum dos especialistas ? \n");
        printf("\n2 para agendar\n");
        printf("3 para não\n");
        printf("\nDigite: ");
        scanf("%d",&opSite);

    }

    if(opSite == 3) {
        printf("OK, obrigado pela visita.");
    }


    if(opSite == 2) {

        printf("\npara fazer seu agendamento precisamos de alguns dados\n");
        printf("Vamos lá ?\n");

        printf("\n\t\tTela de cadastro\n");


        printf("Nome: ");
        gets(nome);
        scanf("%49[^\n]s",nome);

        fflush(stdin);
        printf("Possui alergia a algum medicamento ? [S/N] ");
        scanf("%c",&alergia);

        if(alergia == 's') {
            printf("Digite o nome do medicamento: ");
            scanf("%s",&medicamentoAlergico);
        }

        printf("CPF: ");
        for(i = 0; i < 11; i++) {
            scanf("%1d",&cpf[i]);
        }

        printf("Telefone com DDD: ");
        for(i = 0;i < 11;i++) {
            scanf("%1d",&phone[i]);
        }



        /*printf("\n\t\tDados cadastrados\n");

        printf("\n");
        printf("Nome: ");
        puts(nome);
        printf("CPF digitado: ");
        for(i = 0;i < 11;i++) {
            printf("%d", cpf[i]);
        }

        printf("\nTelefone digitado: ");
        for(i = 0;i < 11;i++) {
            printf("%d", phone[i]);
        }*/

        printf("\n\n\tLista de medicos disponíveis.\n\n");

        printf("1 Dentista\n");
        printf("2 Neurologista\n");
        printf("3 Psicologo\n");
        printf("4 Pediatra\n");

        do {
            printf("\nPara qual médico deseja agendamento ? ");
            scanf("%d",&opMedicos);

            switch(opMedicos) {
                case 1:
                    printf("\n\tdias disponíveis para dentista:\n");
                    printf("\tSegunda: 9:00 - 12:00 horas e 15:00 - 19:00 horas.\n");
                    printf("\n\t\t\tSelecione o dia\n");
                    printf("1 para segunda\n");
                    break;
                case 2:
                    printf("\n\tdias disponíveis para Neurologista:\n");
                    printf("\tterça-feira: 8:40 - 12:40 am\n");
                    printf("\n\t\tSelecione o dia\n");
                    printf("\n2 para terça-feira\n");
                    break;
                case 3:
                    printf("\n\tdias disponíveis para psicologo:\n");
                    printf("\tQuarta-feira: 15:00 - 18:00\n");
                    printf("\n\t\tSelecione o dia\n\n");
                    printf("3 para quarta-feira\n");
                    break;
                case 4:
                    printf("\n\tdias disponíveis para pediatra:\n\n");
                    printf("Segunda: 8:00 - 11:00 am\n");
                    printf("Quarta-feira: 9:00 - 12:00 am\n");
                    printf("Sexta-feira: 15:00 - 18:00 pm\n");
                    printf("\n\tSelecione o dia\n\n");
                    printf("1 para segunda-feira\n");
                    printf("3 para quarta-feira\n");
                    printf("5 para sexta-feira\n");
                    break;
                default:
                    printf("opção invalida. Digíte um número entre as opções de 1 a 4\n");
            }
        }while(opMedicos < 1 || opMedicos > 4);

        while(1) {
            printf("\nQual dia deseja agendar ? ");
            scanf("%d",&diaConsulta);

            if(diaConsulta == 1 && opMedicos == 1) {
                printf("\n\tSelecione o horario da consulta:");
                printf("\n\nopção 1 Segunda: 9:00 - 12:00 am");
                printf("\nopção 2 15:00 - 19:00 horas pm");
                break;
            }
            if(opMedicos == 2 && diaConsulta == 2) {
                printf("\n\tSelecione o horario da consulta:\n");
                printf("\nopção 3 terça-feira: 8:40 - 12:40 am");
                break;
            }
            if(opMedicos == 3 && diaConsulta == 3) {
                printf("\n\t\tSelecione o horario da consulta: \n\n");
                printf("opção 4 Quarta-feira das 15:00 até 18:00 horas pm \n");
                break;
            }
            if(opMedicos == 4 && diaConsulta == 1) {
                printf("\n\t\tSelecione o horario da consulta: \n\n");
                printf("opção 1 Segunda-feira das 8:00 as 11:00 horas am");
                break;
            }
            if(opMedicos == 4 && diaConsulta == 3) {
                printf("\n\t\tSelecione o horario da consulta: \n\n");
                printf("opção 2 Quarta-feira das 9:00 as 12:00 horas am");
                break;
            }
            if(opMedicos == 4 && diaConsulta == 5) {
                printf("\n\t\tSelecione o horario da consulta: \n\n");
                printf("opção 3 Sexta-feira das 15:00 as 18:00 horas pm");
                break;
            }else {
                printf("opção invalida. Tente novamente\n");
            }

        }

        do {
            printf("\nQual horario deseja agendar ? ");
            scanf("%d",&horarioConsulta);

            if(diaConsulta == 1 && opMedicos == 1 && horarioConsulta == 1) {
                printf("\n\t%s sua consulta foi agendada com sucesso.",nome);
                printf("\n\tSegue abaixo os dados do agendamento\n");
                printf("\n\tConsulta agendada para segunda-feira a partir das 9:00 horas da manhã até o meio dia");
                printf("\n\tOBS: Atendimento por ordem de chegada.");
                printf("\n\tLevar documento com foto\n");
                break;
            }
            if(diaConsulta == 1 && opMedicos == 1 && horarioConsulta == 2) {
                printf("\n\t%s sua consulta foi agendada com sucesso.",nome);
                printf("\n\tSegue abaixo os dados do agendamento\n");
                printf("\n\tConsulta agendada para segunda-feira a partir das 15:00 horas até as 19:00 horas pm");
                printf("\n\tOBS: atendimento por ordem de chegada");
                printf("\n\tLevar documento com foto");
                break;
            }
            if(diaConsulta == 2 && opMedicos == 2 && horarioConsulta == 3) {
                printf("\n\t%s sua consulta foi agendada com sucesso.",nome);
                printf("\n\tSegue abaixo os dados do agendamento\n");
                printf("\n\tConsulta agendada para terça-feira a partir das 8:40 até 12:40 am");
                printf("\n\tOBS: atendimento por ordem de chegada");
                printf("\n\tLevar documento com foto");
                break;
            }
            if(diaConsulta == 3 && opMedicos == 3 && horarioConsulta == 4) {
                printf("\n\t%s sua consulta foi agendada com sucesso.",nome);
                printf("\n\tSegue abaixo os dados do agendamento\n");
                printf("\n\tconsulta agendada para quarta-feira das 15:00 horas até as 18: horas pm");
                printf("\n\tOBS: atendimento por ordem de chegada");
                printf("\n\tLevar documento com foto\n");
                break;
            }
            if(diaConsulta == 1 && opMedicos == 4 && horarioConsulta == 1) {
                printf("\n\t%s sua consulta foi agendada com sucesso.",nome);
                printf("\n\tSegue abaixo os dados do agendamento\n");
                printf("\nconsulta agendada para Segunda-feira das 8:00 até 11:00 am\n");
                printf("OBS: atendimento por ordem de chegada\n");
                printf("Levar documento com foto\n");
                break;
            }
            if(diaConsulta == 3 && opMedicos == 4 && horarioConsulta == 2) {
                printf("\n\t%s sua consulta foi agendada com sucesso.",nome);
                printf("\n\tSegue abaixo os dados do agendamento\n");
                printf("\nconsulta agendada para Quarta-feira das 9:00 até 12:00 am\n");
                printf("OBS: atendimento por ordem de chegada\n");
                printf("Levar documento com foto\n");
                break;
            }
            if(diaConsulta == 5 && opMedicos == 4 && horarioConsulta == 3) {
                printf("\n\t%s sua consulta foi agendada com sucesso.",nome);
                printf("\n\tSegue abaixo os dados do agendamento\n");
                printf("\nconsulta agendada para sexta-feira das 15:00 até as 18:00 pm\n");
                printf("OBS: atendimento por ordem de chegada\n");
                printf("Levar documento com foto\n");
                break;
            }else {
                printf("opção invalida. Tente novamente\n");
            };


        }while(1);

    }

    return 0;
}
