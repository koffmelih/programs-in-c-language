#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i, sayi,tektop=0,ciftcarp=1,teks=0,cifts=0;
	float art,geo;
	
	  for(i=1;i<=4;i++){
	  	printf("%d.sayi giriniz:",i);
	  	scanf("%d",&sayi);
	  	
	  	if(sayi%2==0){
	  		ciftcarp=ciftcarp*sayi;
	  		cifts++;
	  		
		  }
		  else
		  {
		  	tektop=tektop+sayi;
		  	teks++;
		  	
		   }
	      }
	      if (teks==0) art = 0;
	      
		  else art=tektop/teks;
		  printf("tek sayilarin ort:%.1f\n",art);
		  if (cifts==0) geo = 0;
		  else geo=pow(ciftcarp,1/cifts);
		  printf("cift sayilari geometrik ortalamasi:%.1f",geo);
		  
	  	
	  	
	  
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
