/*Ejemplo-14.c*/
/*Version 4.1*/
//cabecera con librerias
#include "librerias.h"

//prototipos para poder usar funciones
int validarDimension(void);
double *construirVector(int);
void leerVector(int,double*);
void imprimirVector(int,double*);
double calcularMedia(int, double*);
double calcularVarianza(int,double*,double);
double desviacionEstandar(double);
void destruirVector(double*);

//funcion principal main
int main(void)
{

    double M,V,DS;
    //Definimos la variable apuntadora
    double  *X;
    int N;
    puts("Escriba el numero de elementos del vector ... \n ");
    //Mandamos a llamar la funcion validar arreglo
    N=validarDimension();
    printf("Construyendo el arreglo dinamico ... \n");
    //Cracion del vector 
    X = construirVector(N);
    printf("Recuperando los datos del archivo ... \n ");
    leerVector(N,X);
    printf("Los valores almacenados en el vector son ... \n");
    imprimirVector(N,X);
    //Realizacion de la media
    printf("Realizando el calculo de la media...\n");
    M=calcularMedia(N,X);
    printf("La media aritmetica es: %1f\n",M);
    //Realizacion de la Varianza
    puts("Realizando el calculo de la varianza ... \n");
    V=calcularVarianza(N,X,M);
    printf("La varianza es : %1f .... \n",V);
    //Realizacion de la desviacion estandar
    puts("Calculando la desviacion estandar ...");
    DS = desviacionEstandar(V);
    printf("La desviacion estandar es: %1f \n",DS);
    printf("Destruyendo el arreglo dinamico...\n");
    //Destruyendo el vector
    destruirVector(X);
    puts("Fin del programa ...");
    return 0;
}