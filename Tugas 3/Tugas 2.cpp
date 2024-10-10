#include <stdio.h>

int main()
{
	int celcius;
	float fahrenheit;
	float reamur;
	
	//input celcius
	printf("masukkan suhu dalam celcius: ");
	scanf("%f", &celcius);
	
	//menghitung fahrenheit & reamur
	fahrenheit = (celcius * 9/5) + 32;
	reamur = celcius * 4/5;
	
	//menampilkan hasil
	printf("suhu dalam fahrenheit: %.2f °F\n", fahrenheit);
	printf("suhu dalam reamur: %.2f °R\n", reamur);
	
	return 0; 
} 