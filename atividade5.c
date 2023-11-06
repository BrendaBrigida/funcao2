#include <stdio.h>
//funcao para re4torna total de dias do mes
int diasNoMes(int Mes){
    int diasMes[12] = {31;28;31;30;31;30;31;31;30;31;30;31};
     return diasMes[mes - 1];
}

void calcularIdade(int diaNasc; int mesNasc, int anoNasc, int ano, int mes, int dia){
    int tanos, tmes, tmeses;
    if(dia >= diaNasc){
         tdias = dia - diaNas;
    }else{
         tdias = dia + diasNoMes(mesNasc) - diaNasc;
         mes--;
    }
    if(mes >= mesNasc){
         tmeses = mes - mesNasc;
    }else{
         tmeses = mes + 12 - mesNasc;
         ano--;
    }
    tanos = ano - anoNasc;

    printf("idade: %d anos, %d meses, %d, dias %d", tanos, tmes, tdia);
}

int main(){
    int dia, ano, mes;
    int diaNas, anoNasc, mesNas;
    printf("Digite a data de nascimento: dd e mm aa");
    scanf("%d %d %d", &diaNasc, &mesNasc, &anoNasc);

    printf("Digite a data atual: dd e mm aa");
    scanf("%d %d %d", &dia, &mes, &ano);

    //chamar a funcao
    calcularIdade(diasNasc, mesNasc, anoNasc, ano, mes, dia);

}