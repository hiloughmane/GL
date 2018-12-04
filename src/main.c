#include "my_header.h"
#include "stdio.h"

void main(void)
 { 
   unsigned int nb_points;
   char nom_fig[100];
   unsigned char x[5];
   unsigned char y[5];
   char ligne1[80] = "Nom: pentagone_B" ;
   char ligne2[80] = "Nb points: 5" ;
   char ligne3[80] = "Cordonnees: 10 20 30 20 30 40 43 53 35 65" ;
   char phrase[100];




   sscanf(ligne1, "%*s %s", nom_fig);
   sscanf(ligne2, "%*s %*s %u", &nb_points);
   sscanf(ligne3, "%*s %u %*u %u %*u %u %*u %u %*u %u %*u", x[0], x[1], x[2], x[3], x[4]);
   sscanf(ligne3, "%*s %*u %u %*u %u %*u %u %*u %u %*u %u", y[0], y[1], y[2], y[3], y[4]);
   
   sprintf(phrase, "La figure %s possède %d sommets", nom_fig, nb_points);
   printf("%s", phrase);




   getchar();
 }
