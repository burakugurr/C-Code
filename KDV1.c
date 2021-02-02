	/*
	Name: CALCULATION of KDV 
	Copyright: 
	Author: BURAK UÐUR
	Date: 23.10.18 19:05
	Description: Hacetepe Universty Departman of Statistics C Projeckt-1
*/

#include<stdio.h>
#include<locale.h>//Türkçe karekter kullanmak için 
int main(){
	float kdv,fiyat;
	setlocale(LC_ALL, "Turkish"); //Türkçe karekter kullanmak için 
	printf("Ürün Fiyatýný Giriniz:");
	scanf("%f",&fiyat);
	printf("KDV oranýný giriniz(YÜZDE):");
	scanf("%f",&kdv);
	printf("KDVsiz Ürün Fiyatý-->%.2f \n",fiyat);
	fiyat=fiyat+fiyat*(kdv/100);
	
	printf("KDVli Ürün Fiyatý-->%.2f",fiyat);
	
	return 0 ;
}
