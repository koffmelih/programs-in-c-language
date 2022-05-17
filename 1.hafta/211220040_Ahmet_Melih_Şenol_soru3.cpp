#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("*****************sayilarin ortlamasi**************\n");
	int sayi1,sayi2,sayi3;
	float ort;
	printf("1.sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("2.sayiyi giriniz:");
	scanf("%d",&sayi2);
	printf("3.saiyiyi giriniz:");
	scanf("%d",&sayi3);
	
	ort= (float) (sayi1+sayi2+sayi3)/3;

	printf("girilen 3 sayinin ortalamasi: %.2f\n\n",ort);
	printf("***************************************************");


	return 0;
}
