#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{ 
    int i, sayi,buyukSayac = 0,kucukSayac= 0;
    float top = 0,ort;
    srand(time(NULL));
    int matrix[50];
    for(i = 0 ; i < 50 ; i++)
    {
        matrix[i] = rand() % 100;
        top += matrix[i];
    }
    printf("Sayilarin ortalamasi = %f\n",top/50);
    
    ort = top/50;
    for(i = 0;i<50;i++){
    	if(ort < matrix[i]){
    		buyukSayac ++;
    		
		}
		else{
			kucukSayac ++;
		}
	} for(i=0;i<50;i++){
		printf("%d\t",matrix[i]);
	}
	printf("\nBuyuk sayilarin adedi = %d\n",buyukSayac);
	for(i=0;i<50;i++){
		if(ort<matrix[i]){
			printf("%d\t",matrix[i]);
		}
	}
    printf("\nKucuk sayilarin adedi = %d\n",kucukSayac);
    	for(i=0;i<50;i++){
		if(ort>matrix[i]){
			printf("%d\t",matrix[i]);
		}
	}

    return 0;
}
