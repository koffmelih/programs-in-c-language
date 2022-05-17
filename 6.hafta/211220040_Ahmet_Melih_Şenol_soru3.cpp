#include<stdio.h>
void asalkon(int sayi){
	int i=2,sayac=0;
	while(i<sayi){
	if(sayi%i==0){
		sayac++;break;
	}	
	i++;	
	}
	if(sayac==1)
	printf("sayi asal degil");
	else if(sayac==0)
	printf("sayi asal");	
}

int main(){
	int sayi;
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	asalkon(sayi);
	
	
	
	return 0;
}
