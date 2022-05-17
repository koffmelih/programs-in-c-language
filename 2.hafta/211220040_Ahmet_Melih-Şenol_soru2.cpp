#include <stdio.h>
#include <stdlib.h>



int main() {
	int i,sayi,sayac=0,toplam = 0;
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	for(i=2;i<=sayi;i+=2)
	{
		toplam=toplam+i;
		sayac = sayac + 1;
	}
		printf("girlen degere kadar olan cift sayilarin toplami:%d\n",toplam);
	printf("sayilarin ortalamasi:%d",toplam/sayac) ;
	
	
	
	
	
	
	
	return 0;
}
