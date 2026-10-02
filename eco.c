#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 4) {
        fprintf(stderr, "Uso: %s TESTO INTERO REALE \n", argv[0]);
        return 2;
    }

    char *testo = argv[1];
    int i = atoi(argv[2]);
    double d = atof(argv[3]);
    

    printf("%s %d %lf", testo, i, d);

    return 0;
}
