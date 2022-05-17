#include<stdio.h>
struct isci{
	char adi[40];
	char soyadi[40];
	int yas;
	double aylik_ucreti;	
};
struct isci bilgial(){
	
	struct isci isci1;
	printf("kisinin ad soyad yas aylik ucretini giriniz:");
	scanf("%s %s %d %lf",&isci1.adi,&isci1.soyadi,&isci1.yas,&isci1.aylik_ucreti);
	return isci1;	
}
void goster(struct isci a){
	printf("adi:%s\nsoyadi:%s\nyas:%d\naylik ucret:%.2lfTL",a.adi,a.soyadi,a.yas,a.aylik_ucreti);	
	
}
int main(){
	struct isci isci1=bilgial();
	goster(isci1);
	return 0;
}
