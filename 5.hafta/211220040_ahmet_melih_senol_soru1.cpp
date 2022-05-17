#include<stdio.h>

int main(){
	char metin[100];
	
	printf("metin girininz:");
	gets(metin);
	
	int i=0,sayac=0;
	while(metin[i]!='\0'){
		if(metin[i]==' '){
			sayac++;
		}
		i++;
	}
	
	printf("%d",sayac+1);
	
	
	
	return 0;
	
}
