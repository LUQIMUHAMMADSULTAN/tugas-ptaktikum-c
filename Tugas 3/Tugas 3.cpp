#include <stdio.h>
#include <math.h>

int main()
{
	float alas;
	float tinggi;
	float miring;
	
	//input alas dan tinggi segitiga
	printf("PROGRAM MENGHITUNG SISI MIRING SEGITIGA\n\n");
	printf("masukkan alas segitiga (dalam cm) : ");
	scanf("%f", &alas);
	printf("masukkan tinggi segitiga (dalam cm) : ");
	scanf("%f", &tinggi);
	
	
	//menghitung sisi miring
	miring = sqrt((alas / 2) * (alas / 2) + tinggi * tinggi);
	
	//menampilkan hasil
	printf("sisi miring segitiga: %.3f cm\n", miring);
	return 0;
}