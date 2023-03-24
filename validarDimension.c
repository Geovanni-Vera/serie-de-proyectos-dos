/*ValidarDimension v.3.1*/

#include "librerias.h"

int validarDimension(void)
{
    char str[128];
    int n;
   for(;;)
   {
        printf("Valor=? \n");
        fgets(str,128,stdin);
        n=(int)atoi(str);
        if (n>0 && n <= NMR)
        {
            if(n<=NMC) break;
        }

   }
    return n;
}