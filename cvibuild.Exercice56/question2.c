#include <stdlib.h>
#define SEUILB -100
#define SEUILH 200
void main(void)

{

 unsigned int sat[10];
 unsigned char i;
 short rand_a_b (short a = -100 , short b = 200)
 short nb_aleatoire = 0;
 
 for ( i = 0; i<10 ; i++ )
 {
	 nb_aleatoire = rand()%( b - a )+ a ;
     sat[i] = nb_aleatoire;
 }
}
	   






