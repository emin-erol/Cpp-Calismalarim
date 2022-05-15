#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Ogrenciler{
	int no;
	char cevap[5];
};

struct Sonuclar{
	int no;
	float net;
};

int main(){
	char cevap_anahtari[5];
	int ogr_sayisi,i,j,dogru=0,yanlis=0;
	printf("Lutfen ogrenci sayisini giriniz: ");
	scanf("%d",&ogr_sayisi);
	Ogrenciler ogrenci[ogr_sayisi];
	Sonuclar sonuc[ogr_sayisi];
	printf("Cevap anahtarini giriniz:\n");
	for(i=0;i<5;i++){
		printf("%d-> ",i+1);
		scanf("%s",&cevap_anahtari[i]);
	}
	printf("Ogrencilerin cevaplarini giriniz:\n");
	for(i=0;i<ogr_sayisi;i++){
		printf("%d. ogrencinin numarasini giriniz: ",i+1);
		scanf("%d",&ogrenci[i].no);
		sonuc[i].no = ogrenci[i].no;
		printf("%d numarali ogrencinin cevaplarini giriniz:\n",ogrenci[i].no);
		for(j=0;j<5;j++){
			printf("%d-> ",j+1);
			scanf("%s",&ogrenci[i].cevap[j]);
		}
	}
	for(i=0;i<ogr_sayisi;i++){
		
		for(j=0;j<5;j++){
			if(ogrenci[i].cevap[j] == cevap_anahtari[j]){
				dogru++;
			}
			else {
				yanlis++;
			}
		}
		printf("Dogru sayisi: %d\n",dogru);
		printf("Yanlis sayisi: %d\n",yanlis);
		sonuc[i].net = dogru-(yanlis*0.25);
		dogru = 0;
		yanlis = 0;
	}
	for(i=0;i<ogr_sayisi;i++){
		printf("%d nolu ogrencinin neti: %f\n",sonuc[i].no,sonuc[i].net);
	}
	return 0;
}






