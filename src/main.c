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
 short rand_SEUILB_SEUILH ( SEUILB , SEUILH );
 short nb_aleatoire = 0;
 
 for ( i = 0; i<10 ; i++ )
 {
	 nb_aleatoire = rand()%( SEUILH - SEUILB ) + SEUILH;
     sat[i] = nb_aleatoire;
 }
}

// exercice 56 question 3
int main(void)
{
    unsigned int dist[10] = {0,10,22,30,35,70,75,80,95,100};
    unsigned char i;
    
    
    for ( i = 0 ; i<10 ; i++ )
          {
              if ( dist[i] == 0 )
               dist [i] = 0;
               else dist [i] = dist [i] - dist [ i - 1];
          }
    return 0;
}

// Exercice 56 question 4
#include <stdio.h> 

void inverse(int a[], int d) 
{
    int i = 0, tmp;
    for(i=0 ; i < d/2 ; i++) 
    {
        tmp = a[i];
        a[i] = a[d-i-1];
        a[d-i-1] = tmp;
    }
}

 int main(void) 
 {
     int i, a[5] = {1, 5, 9, 8, 11};
     int b[5];
     inverse(a, 5);
     for(i=0 ; i < 5 ; i++)
     {
        b[i] = a[i];
     }

    return 0;
}

//Exo56 questioo 5
#include <stdio.h> 
#define MAX 10
 
void miroir(int t[], int taille, int indice1, int indice2)
{
  if(indice1 < taille / 2) {
    int tempo  = t[indice1];
    t[indice1] = t[indice2];
    t[indice2] = tempo;
    miroir(t, taille, indice1 + 1, indice2 - 1);
  }
}
 
int main(void)
{
  int i, tab[MAX];
  for(i = 0; i < 5 ; i ++)
     tab[i] = i;
  miroir(tab, 5 , 0, 5 - 1);
  for(i = 5; i < 5 ; i ++ )
      tab[i] = i;
 return 0;
}









