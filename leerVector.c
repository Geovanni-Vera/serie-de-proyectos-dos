/*leerVector v.3.1*/

#include "librerias.h"

void leerVector(int n, double *arr)
{
    //Apuntador a archivos
    FILE *fp;
    char str[128];
    int i;
    //fopen abrir el archivo datos.txt y la r es el modo de lectura
    fp=fopen("datos.txt","r");
    if(fp==NULL)
    {
        printf("Error, no se encuentra el archivo...\n");
        exit(2);
    }
    for(i=0;i<n;i++)
    {
        fgets(str,128,stdin);
        arr[i]=(double)atof(str);
    }
    //fclose() metodo de cierre del archivo
    fclose(fp);
}