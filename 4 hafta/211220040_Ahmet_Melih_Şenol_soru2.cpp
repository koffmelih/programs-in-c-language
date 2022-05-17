#include <stdio.h>
#include <stdlib.h>
#include<time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,ind1[10],ind2[10],bos;
	srand(time(NULL));
	
	for(i=0;i<10;i++){
		ind1[i]=rand()%50;
		printf("%d\t",ind1[i]);
		
		ind2[i]=rand()%50;
		printf("%d\n",ind2[i]);
	}
		for(i=0,j=1;i<10;i+=2,j+=2){
		bos=ind1[i];
		ind1[i]=ind2[j];
		ind2[j]=bos;		
	}
		printf("\n\n\nyer degistirilmis halleri\n\n\n");

	for(i=0;i<10;i++){
	
		printf("%d\t",ind1[i]);
		printf("%d\n",ind2[i]);
	}	
	
	return 0;
}
