#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
printf("***************HESAP MAKINESI*************\n");
int sayi1,sayi2,toplama,cikarma,carpma;
float bolme;

printf("1.sayiyi giriniz:");
scanf("%d", &sayi1);
printf("2.sayiyi giriniz:");
scanf("%d", &sayi2);

toplama=sayi1+sayi2;
printf("tolama sonucu: %d\n",toplama);

cikarma=sayi1-sayi2;
printf("cikarma sonucu: %d\n",cikarma);

carpma=sayi1*sayi2;
printf("carpma sonucu: %d\n",carpma);

bolme=(float) sayi1/sayi2;
printf("bolme sonucu: %.2f\n",bolme);


printf("********************************************************");
	return 0;
}
