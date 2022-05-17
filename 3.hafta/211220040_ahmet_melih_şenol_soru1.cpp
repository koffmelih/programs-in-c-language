#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
	int i,j,gir,yildiz,bosluk;
	
	printf("sayi giriniz:");
	scanf("%d",&gir);
	yildiz=1;
	bosluk=gir-1;
	
	for(i=0;i<gir;i++){
		for(j=0;j<bosluk;j++){
			printf(" ");
			}
		for(j=0;j<yildiz;j++){
			printf("#");
		}
		printf("\n");
		bosluk--;
		yildiz++;
	}
	bosluk=1;
	yildiz-=2;
	for(i=0;i<gir;i++){
		for(j=0;j<bosluk;j++){
			printf(" ");
			}
		for(j=0;j<yildiz;j++){
			printf("#");
		}
		printf("\n");
		bosluk++;
		yildiz--;
	}

	
	
		return 0;
	}

