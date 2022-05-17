#include<stdio.h>
int factoriyel(int a){
	int fact=1;
	while(a>0){
		fact*=a;
		a--;
	}
	return fact;	
}
int kombinasyon(int n,int r){
	int k=factoriyel(n)/(factoriyel(r)*factoriyel(n-r));
    return k;
}
int main(){
	int n,r;
	printf("kombinasonunu alacaginiz sayilari giriniz:");
	scanf("%d %d",&n,&r);
	printf("girilen sayinin kombinasyonu %d",kombinasyon(n,r));
	
return 0;	
}
