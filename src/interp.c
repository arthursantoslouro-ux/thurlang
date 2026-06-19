#include <string.h>
#include "interp.h"
#include <stdio.h>
#include <stdlib.h>
#include "lexer.h"

void interpretar(char *nomearquivo) {

    char linha[256];
    FILE *arquivo = fopen(nomearquivo, "r");
    int linha_num = 0;

    if (!arquivo) {
        printf("thurlang: erro arquivo não encontrado\n");
        return;
    }

while (fgets(linha, sizeof(linha), arquivo)) {

    linha_num++;

    linha[strcspn(linha, "\n")] = 0;

    if (linha[0] == '\0') {
        continue;
    }

    if (linha[0] == '@') {
        continue;
    }

    if (strncmp(linha, "print ", 6) == 0) {

        char *texto = linha + 6;
        printf("%s\n", texto);
    }

    else {
        printf("thurlang: erro na linha %d: comando desconhecido -> '%s'\n",
               linha_num, linha);
    }

    

lexer(arquivo);



}
    fclose(arquivo);
}
