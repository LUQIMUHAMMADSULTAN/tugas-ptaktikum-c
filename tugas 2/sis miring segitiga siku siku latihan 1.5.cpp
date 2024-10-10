#include<stdio.h>
#include<math.h>

int main()
{
	float a = 4.0;
	float b = 5.0;
	float c = sqrt(a*a+b*b);
	
	printf("Rumus kemiringan segitiga siku siku c^2= a^2 + b^2 \n");
	printf("a = %.2f  cm\n",a);
    printf("b = %.2f cm\n",b);
    printf("c = %.f^2 + %.f^2\n",a,b);
    printf("jadi hasil kemiringan sisi segitiga siku siku adalah = %.2fcm \n",c);
    return 0;
}