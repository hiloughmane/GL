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
