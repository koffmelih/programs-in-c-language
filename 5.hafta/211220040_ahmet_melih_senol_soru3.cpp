#include<stdio.h>
int main(){
	
	char harf[100];
	int i=0;
	printf("bir metin giriniz:");
	gets(harf);
	while(harf[i]!='\0'){
		if(harf[i]>='A'&& harf[i]<='Z'){
			harf[i]+=32;
		}
		else if(harf[i]>='a'&& harf[i]<='z'){
			harf[i]-=32;
		}
		printf("%c",harf[i]);
		i++;
		}
	
	
	
	
	
	
	
	return 0;
	
}
