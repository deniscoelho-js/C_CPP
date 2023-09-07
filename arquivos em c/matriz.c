#include <stdio.h>

int main() {
    int matriz[3][3],i, j;

    printf ("\nDigite valor para os elementos da matriz\n\n");

    for ( i=0; i<3; i++ )
        for ( j=0; j<3; j++ )
        {
            printf ("\nElemento[%d][%d] = ", i, j);
            scanf ("%d", &matriz[ i ][ j ]);
        }

    printf("\n\n******************* Saida de Dados ********************* \n\n");

    for ( i=0; i<3; i++ ) {
        for (j = 0; j < 3; j++) {
            printf("\nElemento[%d][%d] = %d\t", i, j, matriz[i][j]);
        } printf("\t");
    }
    return(0);
}
