#include <stdio.h>

int main()
{
	float totalbelanja, diskonpersen, diskon, totalsetelahdiskon, uangkonsumen, uangkembalian;
	
	printf("masukkan total belanja: ");
	scanf("%f", &totalbelanja);
	
	printf("masukkan persentase diskon (dalam persen): ");
	scanf("%f", &diskonpersen);
	
	diskon = (diskonpersen / 100) * totalbelanja;
	totalsetelahdiskon = totalbelanja - diskon;
	
	printf("masukkan uang konsumen: ");
	scanf("%f", &uangkonsumen);
	
	if (uangkonsumen >= totalsetelahdiskon) {
		uangkembalian = uangkonsumen - totalsetelahdiskon;
		printf("diskon: %.2f\n", diskon);
		printf("total belanja setelah diskon: %.2f\n", totalsetelahdiskon);
		printf("uang kembalian: %.2f\n", uangkembalian);
	} else {
		printf("uang konsumen tidak cukup untuk membanyar.\n");
		printf("total yang harus di banyar: %.2f\n", totalsetelahdiskon);
	}
	
	return 0;
}