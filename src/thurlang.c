#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "interp.h"
#include "lexer.h"

int main(int argc, char *argv[]) {
char *nomedoarquivo = argv[1];

FILE *arquivo = fopen(nomedoarquivo, "r");

if (!arquivo) {
    printf("thurlang: arquivo nao existe\n");
    fclose(arquivo);
}


if (strcmp(argv[1], "--help") == 0) {
    printf("ainda nao tem help fi\n");
}

interpretar(nomedoarquivo);

fclose(arquivo);

return 0;

}
