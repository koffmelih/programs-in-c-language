#include<stdio.h>
struct ders{
	int der_kodu;
	int vize_notu;
	int final_notu;
	int gecme_notu;
	
};
struct ogr_bil{
	char adi[40];
	char soyad[40];
	int no;
	struct ders dersler[5];
};
int main(){
	struct ogr_bil ogr[3];
	int i,j;
	for(i=1;i<=1;i++){
		printf("\nogr adi,soyadi,numarasi giriniz:");
		scanf("%s%s%d",&ogr[i].adi,&ogr[i].soyad,&ogr[i].no);
		for(j=1;j<=5;j++){
			printf("\nders_kodu,vize_notu,final_notunu giriniz:");
			scanf("%d%d%d",&ogr[i].dersler[j].der_kodu,&ogr[i].dersler[j].vize_notu,&ogr[i].dersler[j].final_notu);
			ogr[i].dersler[j].gecme_notu=ogr[i].dersler[j].vize_notu*0.4+ogr[i].dersler[j].final_notu*0.6;
			}		
		printf("\nadi:%s\nsoyadi:%s\nno:%d",ogr[i].adi,ogr[i].soyad,ogr[i].no);
		for(j=1;j<=5;j++){
			printf("\n%d.dersin gecme notu:%d\n",j,ogr[i].dersler[j].gecme_notu);
		}
		
		
		
		
	}
	
}
