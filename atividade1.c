#include <stdio.h>
int EscolherOpcao();
void aVista(float totalCompra);
void parcelarDuas(float totalCompra);
void parcelarMaisDeTres(float totalCompra);


main(){
    int opcaoEscolha;
    float totalCompra;
    printf("informe o valor total da compra");
    scanf("%f", &totalCompra);

    opcaoEscolha = escolhaOpcao();

    switch(opcaoEscolha)
    {
      case 1:
        aVista(totalCompra);
        break;
      case 2:
        parcelarDuas(totalCompra);
        break;
      case 3:
        parcelarMaisDeTres(totalCompra);
        break;   
    }
}

int escolherOpcao(){
    int opcao;
    do{
     printf("1-A vista");
     printf("\n2- parcelando em duas vezes");
     printf("\nparcelando de tres a 10 vezes para compra inferiores a 100,00");
     printf("\n\ndigite a opcao escolhida");
     scanf("%d", &opcao);
     if(opcao < 1 || opcao > 10){
           printf("opcao invalida\n");
     }
    }while(opcao < 1 || opcao > 10);
}
void aVista(float totalCompra){
    float desconto = (totalCompra * 0.10);
    float valorFinal = totalCompra - desconto;
    printf("valor do desconto R$%.2f", desconto);
    printf("\nvalor de cada parcela da compra R$%.2f", valorFinal);
}
void parcelarDuas(float totalCompra){
    float totalParcela = totalCompra / 2;
    printf("valor total da compra R$%.2f", totalCompra);
    printf("\nvalor total de cada parcela de compra R$%.2f", totalParcela);
}
void parcelarMaisDeTres(float totalCompra){
    int qtdParcelas;
    float juros, valorFinal, parcelas;

    if(totalCompra < 100){
        printf("nao e possivel parcelar em mais de tres vezes compra abaixo de 100,00");
        return;//encerra a excucao da funcao
    }
    //solicitar a qtd de parcelas

    do{
        printf("digite a quantidade de parcela");
        scanf("%d", &qtdParcelas);
        if(qtdParcelas < 3 || qtdParcelas > 10){
            printf("\ninvalido, digite de novo");
        }
    }while(qtdParcelas < 3 || qtdParcelas > 10);

    juros = totalCompra * 0.03;
    valorFinal = totalCompra + juros;
    parcelas = valorFinal/qtdParcelas;

    printf("valor final da compra com juros: R$%.2f", valorFinal);
    printf("\nvalor total dos juros: R$%.2f", juros);
    printf("\nvalor totaol de cada parcela: R$%.2f", parcelas);
}