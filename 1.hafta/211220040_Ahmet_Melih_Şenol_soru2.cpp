#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("***************sayi karsilastirma programi*****************\n");
	int sayi1,sayi2;
	
	 printf("1.sayiyi giriniz:");
	 scanf("%d",&sayi1);
	 printf("2.sayiyi giriniz:");
	 scanf("%d",&sayi2);
	if(sayi1>sayi2){
		(int) sayi1;
		printf("buyuksayi:%d\n",sayi1);
	
	}
	else if(sayi1<sayi2){
		(int) sayi2;
		printf("buyuksayi:%d\n",sayi2);
		
	}
	else if(sayi1==sayi2){
		(int) sayi1,sayi2;
		printf("sayilar birbirine esit ve:%d\n\n");
	}
	 
	  printf("*******************************************************");
	
	 
	 
	 
	
	return 0;
}
