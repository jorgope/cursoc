/*
	Comentario multilinea
*/
#include <stdio.h>
#include <stdlib.h>

void division (int a, int b, int *c, int *r);

void main (int argc, char *argv[]) 
{
	int c, r, a, b;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	division (a, b, &c, &r);
	printf ("%d / %d = %d y resto = %d\n", a, b, c, r);
}

void division (int a, int b, int *c, int *r) 
{
	(*c)=a/b;
	(*r)=a%b;
	
}
