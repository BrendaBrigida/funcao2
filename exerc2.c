#include <stdio.h>
#include <stdlib.h>

void totalGratuitas(int locacoes[500],int gratuitas[500]){
    for (int i = 0; i < 500; i++) {
        gratuitas[i] = locacoes[i] / 15;
    }
}

int main() {
    
    int locacoes[500],gratuitas[500];
    for (int i = 0; i < 500; i++){
        locacoes[i] = rand() % 100 + 1;
    }
     totalGratuitas(locacoes,gratuitas);
    
    for(int i = 0; i < 10; i++){
        printf("\n%d",gratuitas[i]);
    }
}