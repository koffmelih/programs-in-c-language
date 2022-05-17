#include <stdio.h>
#include <stdlib.h>



int main() {
	int vize,final,but;
	float ort,ort1;
	printf("*********sinif gecme bulucu*************\n");
	printf("vize notunuzu giriniz:");
	scanf("%d",&vize);
	printf("final notunuzu girininz:");
	scanf("%d",&final);
	
	ort=0.4*vize+0.6*final;
	if(ort>=60){
		printf("gectiniz...");
	}
	else{
	 printf("gecemediniz varsa butunleme notunu giriniz:");
	 scanf("%d",&but);
	  ort1=0.4*vize+0.6*but;
	  	if(ort1>=60){
		printf("gectiniz...");
	}
	    else printf("!!kaldiniz!!");
	 }
    

	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
