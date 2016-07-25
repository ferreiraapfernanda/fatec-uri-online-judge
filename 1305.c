//1305 - Arredondamento por Valor de Corte
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()

{   int NumInteiro, NumArredond;
    double dNum, dCutoff, NumFrac;
    char vNum[13], vCutoff[8];

    //recebimento das vari?veis
    fgets(vNum,13,stdin);
    fgets(vCutoff,8,stdin);


    do
    {
        NumInteiro = NumArredond = dNum = dCutoff = NumFrac = 0;

            //convertendo char em double
            dNum = atof(vNum);
            dCutoff = atof(vCutoff);

            //distinguindo parte inteira da parte real
            NumInteiro = dNum;
            NumFrac = dNum - NumInteiro;

            //se a parte fracion?ria for maior ou igual ao cutoff, soma um no inteiro.
            //do contr?rio, continua o mesmo.

            if(NumFrac >= dCutoff)
            {
                NumArredond = NumInteiro + 1;
            }
            else
            {
                NumArredond = NumInteiro;
            }

            printf("%d\n", NumArredond);

    } while ((scanf("%s", &vNum) != EOF) && scanf("%s", &vCutoff)!= EOF);

    return 0;
}
