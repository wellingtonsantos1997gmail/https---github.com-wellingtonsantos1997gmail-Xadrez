#include <stdio.h>

// As variaveis foram declaradas com o mesmo nome das funções


void Torre(int torre) // torre move 4 casas para direita
{
for (int _torre = 1; _torre <= torre; _torre++)
{
    printf("Torre: Direita\n");
    for (int _torre = 1; _torre <= torre; _torre++)
    {
        printf("Torre: Baixo\n");
        
    }
    
}

}



void Bispo(int bispo) // bispo move 6 casas para a diagonal superior direita
{
    if(bispo > 0){
        printf("Bispo: Diagonal superior direita\n");
        Bispo(bispo - 1);
    }
}

void Rainha(int rainha) // rainha move 5 casas para cima
{
    if (rainha > 0)
    {
        printf("Rainha: Cima\n");
        Rainha(rainha - 1);
    }
}

void Cavalo(){
    int cavalo = 1, _cavalo;
    
    while (cavalo--)
    {
        for (_cavalo = 0; _cavalo <= 1; _cavalo++)
        {
            printf("Cavalo: Cima\n");
        }

        printf("Cavalo: Esquerda");
    }
    

}

int main()
{
    int torre = 4;
    int bispo = 6;
    int rainha = 5;
    int c1 = 0;
    int c2 = 0;

    Torre(torre);
    printf("\n");
    Bispo(bispo);
    printf("\n");
    Rainha(rainha);
    printf("\n");
    Cavalo(c1,c2);


    
    return 0;
}