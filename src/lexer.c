#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "lexer.h"

void lexer(FILE *arquivo) {
     char linha[256];

     while (fgets(linha, sizeof(linha), arquivo)) {
            printf("%s", linha);

     }

}
