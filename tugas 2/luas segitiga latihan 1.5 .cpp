#include<stdio.h>

int main ()
{
	int alas , tinggi, luas, rumus;
	
	alas = 8;
	tinggi = 5;
	luas = 0.5 * alas * tinggi;
	
	printf("alas  = %i cm \n", alas);
	printf("tinggi  = %d cm \n", tinggi);
	printf("rumus = (alas*tinggi)/2 \n");
	printf("jadi luasnya   = %i cm \n", luas);
	return 0;
}