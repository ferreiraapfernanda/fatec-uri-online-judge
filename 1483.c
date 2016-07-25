//1483 - Jogo do Bicho
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
    int c, h = 1, Matriz[24], d_ulN, d_ulM, t_ulN, t_ulM, q_ulN, q_ulM;
    unsigned long long N, M;
    double V, premio;

    scanf("%lf", &V);
    scanf("%llu", &N);
    scanf("%llu", &M);

 // atribui valores a matriz (inicio dos intervalos)//
    for (c = 0; c <= 24; c++)
        {
            Matriz[c] = h;
            h = h + 4;
        }
    ////////////////////////////////////////////////////////////

    //DESCOBRINDO OS ULTIMOS NUMEROS//

    do
    {
        premio = 0;
        d_ulN = N % 100;
        d_ulM = M % 100;

        t_ulN = N % 1000;
        t_ulM = M % 1000;

        q_ulN = N % 10000;
        q_ulM = M % 10000;

        if (q_ulN == q_ulM) // 4 ultimos
            premio = V * 3000;
        else
            if (t_ulN == t_ulM)  //3 ultimos
                premio = V * 500;
            else
                if (d_ulN == d_ulM) // 2 ultimos
                    premio = V * 50;
                else     // DESCOBRINDO OS DE MESMO GRUPO
                    if ((d_ulN == 00) && (d_ulM == 00))
                        premio = V *16;

                    else
                    {
                        for (c = 0; c <= 24; c++)
                        {
                            if ((d_ulN >= Matriz[c]) && (d_ulN < Matriz[c+1]))
                            //maiores ou iguais ao corrente E menores que
                            //o proximo grupo=> mesmo grupo
                            {
                                if (d_ulM >= Matriz[c] && (d_ulM < Matriz[c+1]))
                                    premio = V *16;
                                else
                                    if (d_ulN >= 97 && d_ulM >= 97 )
                                        premio = V *16;
                            }
                        }
                    }

        printf("%.2lf\n", premio);

        scanf("%lf", &V);
        scanf("%llu", &N);
        scanf("%llu", &M);

    } while ((V!=0) || (N!=0) || (M!=0));

    return 0;
}
