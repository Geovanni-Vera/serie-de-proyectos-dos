/* construirMatriz.c*/

#include "librerias.h"

double **construirMatriz(int m , int n)
{
    double **mat;
    int i;
    mat=(double**)calloc(m,sizeof(double*));
    if(mat == NULL) exit(0);
    for(i=0;i<m;i++)
    {
        mat[i]=(double*)calloc(n,sizeof(double));
        if (mat[i]==NULL)
        {
            printf("Error No hay memoria disponible\n");
            exit(1);
        }
        return mat;
    }
}