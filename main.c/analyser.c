#include <stdio.h>
#include <stdlib.h>

int main() {
    // Matriz: 7 dias (linhas) por 3 horários (colunas)
    float temperaturas[7][3];
    FILE* f;

    f = fopen("dados.txt", "r");
    if (f == NULL) {
        printf("Erro: Nao foi possivel abrir o arquivo de dados.\n");
        return 1;
    }

    // Lendo os dados e jogando na matriz
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 3; j++) {
            // %f serve para ler números decimais (float)
            fscanf(f, "%f", &temperaturas[i][j]);
        }
    }

    fclose(f); // Sempre feche o arquivo!

    printf("--- RELATORIO DE ANALISE DE DADOS ---\n\n");

    // Processando os dados da matriz
    for (int i = 0; i < 7; i++) {
        float soma = 0;
        for (int j = 0; j < 3; j++) {
            soma += temperaturas[i][j];
        }
        float media = soma / 3;
        
        printf("Dia %d: Media de %.2f graus\n", i + 1, media);
    }

    return 0;
}