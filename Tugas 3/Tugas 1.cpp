#include <stdio.h>
#include <math.h>

int main()
{
	float alas, tinggi, luas, keliling, sisimiring;
	
	//input alas dan tinggi segitiga
	printf("masukkan panjang alas segitiga (cm): ");
	scanf("%f", &alas);
	printf("masukkan tinggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	//menghitung luas segitiga 
	luas = 0.5 * alas * tinggi;
	
	//menghitung keliling segitiga 
	sisimiring = sqrt(pow(alas, 2) + pow(tinggi, 2));
	keliling = alas + tinggi + sisimiring;
	
	//menampilkan hasil
	printf("luas segitiga: %.2f cm^2\n", luas);
	printf("keliling segitiga: %.2f cm\n", keliling);
	
	return 0;
}