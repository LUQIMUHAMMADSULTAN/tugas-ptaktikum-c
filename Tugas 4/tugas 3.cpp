#include <stdio.h>

int main()
{
	int N;
	printf("masukkan nilai N: ");
	scanf("%d", &N);
	
	if (N > 50) {
		N = N - 25;
		
	}else{
	}
	N = N + 10;
	printf("%i\n", N);
	return 0;
}