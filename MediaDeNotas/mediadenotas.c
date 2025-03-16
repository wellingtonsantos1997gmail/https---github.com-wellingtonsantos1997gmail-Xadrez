#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int nota1, nota2, nota3;
    float media;
    int resultado;
    int quantidadeNotas = 3;
    
    printf("Calcule a média de sua nota\n");
    printf("Digite sua primeira nota: \n");
    scanf("%d", &nota1);
    

    printf("Digite sua segunda nota:\n");
    scanf("%d", &nota2);

    printf("Digite sua terceira nota:\n");
    scanf("%d", &nota3);

    resultado = nota1 + nota2 + nota3;
    
    media = (float) resultado / quantidadeNotas;

    printf("Essa é a média de suas notas: %.2f", media);

   

    return 0;

}