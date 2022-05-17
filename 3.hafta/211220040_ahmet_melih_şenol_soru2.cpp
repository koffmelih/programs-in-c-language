#include <stdio.h>
#include <stdlib.h>

int main(){

	int i,sayi,ind,top=0,sayac=0;
	float ort;
	while(1==1){
		printf("sayi giriniz:");
		scanf("%d",&sayi);
		if(sayi<0)
		break;
			i=2;
			ind=0;
			while(i<sayi){
			     
				if(sayi%i==0){
				ind=1;
				break;
				}
				i++;
				}
				if(ind==0&&sayi>1){
				top+=sayi;
				sayac++;
				}
				} 
	
	ort=(float)top/sayac;
	printf("girilen sayilardan asal olanlarin top:%d\n",top);
	printf("girilen sayilardan asal olanlarin ortalamasi:%.2f",(float)top/sayac);
	
	
	
	
	return 0;

}
