/*
	Comentario multilinea
*/
#include  <stdio.h>
void main (int argc, char *argv[]) 
{
	int i;
	for(i=1; i<=argc; i++)
		printf ("%s ", argv[argc-i]);	
}
