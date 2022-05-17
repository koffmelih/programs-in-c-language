#include<stdio.h>
int basamaktoplayici(int sayi){
	int rakamtop=0,k;
	while(sayi>0){
		k=sayi%10;
		sayi=sayi/10;
		rakamtop+=k;
		}
		return rakamtop;		
}

int main(){
	int sayi;
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	printf("%d",basamaktoplayici(sayi));
	
	
	return 0;
}
