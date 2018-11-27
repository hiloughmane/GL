#include <stdlib.h>
#include <my.header.h>
#include <TP_lib_suite.h>
 

void main(void)
{
    unsigned char nb_bons_nums = 0;
    unsigned int comb_win[6];
    unsigned int comb_play[6] = {2,5,7,9,10,15}.
    short tirerNumero(void);
    short comb_aleatoire;
    void initialiserTirage(void);
    unsigned char i , j , n;
    
    for ( n = 0 ; n < 100 ; n++ )
    {
         initialiserTirage();
         for ( i = 0; i < 6; i++ )
           {
             for ( j = 0 ; j < 6 ; j++ )
               {
                 comb_aleatoire = tirerNumero;
                 comb_win[j] = comb_aleatoire;
                  if ( comb_win[j] == comb_play[i] )
                      nb_bons_nums = nb_bons_nums + 1;
               }
           }
    }
}
