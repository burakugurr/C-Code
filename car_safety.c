#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <windows.h>
struct mesaj{
	char mesajbox[7]={ 'M','e','r','h','a','b','a'};
}mesaj;
int main()
{
	
	
	
	
char str[50];
int aracbil,sol,sag,sol1,sag1;


switch(aracbil)
{
case 1:{
	printf("Arac Plakasi:\n");
	gets(str);
	break;
}	
case 2:{
	printf("On sol lastik basınçlarını girin\n");
	scanf("%d",&sol);
	if(50>=sol>=60){
	printf("on Sol lastik basinciniz guvenli surus icin uygundur");
	}
	else if(25 < sol < 49){
	printf("on sol lastikleriniz guvenli suruse uygun degildir ");
	}
	else{
		printf("güvenli surus icin kurallarina uyun");
	}
	
	break;
}	
case 3:{
printf("On sag lastik basınçlarını girin\n");
	scanf("%d",&sol);
	if(50>=sag>=60){
	printf("on Sag lastik basinciniz guvenli surus icin uygundur");	}
 else if(25 < sag < 49 ){
	printf("on sag lastikleriniz guvenli suruse uygun degildir ");
	}
	else{
		printf("güvenli surus icin kurallarina uyun");	
		break;
	}}
case 4:{
	
printf("arka sol lastik basınçlarını girin\n");
	scanf("%d",&sol1);
	if(50>=sol1>=60){
	printf("arka Sol lastik basinciniz guvenli surus icin uygundur");	}
	else if(25 < sol1 < 49){
	printf("on sol lastikleriniz guvenli suruse uygun degildir ");
	}
	else{
		printf("güvenli surus icin kurallarina uyun");	
		break;
	}	
}
	
	case 5:{
	
printf("arka sag lastik basınçlarını girin\n");
	scanf("%d",&sag1);
	if(50>=sag1>=60){
	printf("arka Sag lastik basinciniz guvenli surus icin uygundur");	}
	else if(25<sag1<49){
	printf("on sag lastikleriniz guvenli suruse uygun degildir ");
	}
	else{
		printf("güvenli surus icin kurallarina uyun");	
		break;
		}
	}
		
	

}//swtich sonu//



return 5;
}




































 












