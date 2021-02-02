	/*
	Name: CALCULATION of KDV with Dollar Exchange Rate
	Copyright: 
	Author: BURAK UÐUR
	Date: 23.10.18 19:46
	Description: Hacetepe Universty Departman of Statistics C Projeckt-2
*/

#include<stdio.h>
#include<locale.h>
#include <time.h>


int main(){
	float dolarf,dolar,tlf,fiyat;
	setlocale(LC_ALL, "Turkish"); 
	printf("Ürün fiyatý girin: $");
	scanf("%f",&dolarf);
	printf("\n");
	
time_t simdiki_zaman ;
simdiki_zaman = time(NULL) ;
printf(ctime(&simdiki_zaman ) ) ;

	printf("Tarihindeki Dolar Kurunu giriniz:");
	scanf("%f",&dolar);
	
	tlf=dolar*dolarf;
	fiyat=tlf+tlf*0.18;

	printf("KDVli SATIÞ FÝYATI : %.2f",fiyat);
	
	return 0 ;
}
