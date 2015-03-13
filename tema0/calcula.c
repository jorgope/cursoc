/*
	Comentario multilinea
*/
#include <stdio.h>
#include <stdlib.h>

float multiplica (char *a, char *b);

void main (int argc, char *argv[]) 
{
	printf ("%s x %s = %2.5f\n",argv[1], argv[2], multiplica (argv[1], argv[2]) );
}

float multiplica (char *a, char *b) 
{
	return atof(a)*atof(b);
}
