#include<stdio.h>
struct personel{
	char isim[25];
	char soy_isim[25];
	char okul_ismi [100];
	float diploma ;
	
}kisiselbilgi,a1,a2;
int main(){
	int i;
	printf("personelin ismini giriniz...\n");
		scanf("%s",kisiselbilgi.isim);
		printf("personel soy isimin giriniz...\n");
		scanf("%s",kisiselbilgi.soy_isim);
		
		printf("personelin okudugu okulun ismini giriniz...\n");
	
		scanf("%s",&kisiselbilgi.okul_ismi);
		printf("diploma notunu giriniz...\n");
		scanf("%f",&kisiselbilgi.diploma);
		
	
		if(kisiselbilgi.diploma<3.0){
			
			
			printf("aranan sartlara uygun degilsiniz");
		}
			else{
			printf("aranan sartlari sagliyorsunuz");	
				
			}//else sonu
	switch(kisiselbilgi.diploma<3.0){
		printf("1-2-3 seceneklerine bakýn\n");
		scanf("%d",& i);
		case 1:{
			printf("%s bolumunuzun ogretim uyelerinden referans almayi deneyin..\n",kisiselbilgi.okul_ismi);
		 break;
		}
		case 2:{
			
			printf("3.0 - %f kadar ortalama sahibi olunuz ");
			
			break;
		}
		case 3 :{
			printf("  ")
			break;
		}
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
	
