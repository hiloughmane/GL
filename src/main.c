void main(void)
{
	unsigned char bin[10] = {0,1,2,3,4,5,6,7,8,9} ;
	unsigned char seuil = 5;
	unsigned char i;
	
	
	
	for ( i=0 ; i<10 ; i++ )
	{ 
		if ( bin[i]> seuil )
			bin[i] = 1;
		else bin[i] = 0;
	}
}



// exercice 56 question 2:


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
	   








