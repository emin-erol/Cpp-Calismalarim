#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Yarismaci{
	char ad[10];
	char soyad[10];
	float puan;
};

float hesapla(struct Yarismaci yarismaci1[],int adet){
	float oylar[5],maks,min,toplam_puan=0,birinci=0;
	int i,j,k,m;
	for(i=0;i<adet;i++){
		toplam_puan=0;
		printf("%s %s icin oylama:\n",yarismaci1[i].ad,yarismaci1[i].soyad);
		for(j=0;j<5;j++){
			printf("%d. hakem oyu: ",j+1);
			scanf("%f",&oylar[j]);
		}
		maks = min = oylar[0];
		for(k=0;k<5;k++){
			if(oylar[k] > maks) maks = oylar[k];
			if(oylar[k] < min) min = oylar[k];
		}
		for(m=0;m<5;m++){
			if(oylar[m] != maks && oylar[m] != min) toplam_puan += oylar[m];
		}
		yarismaci1[i].puan = toplam_puan/5;
	}
	for(i=0;i<5;i++){
		if(yarismaci1[i].puan > birinci) birinci = yarismaci1[i].puan;
	}
	return birinci;
}

void bilgileri_bastir(float performans,int adet,struct Yarismaci yarismaci1[]){
	int i;
	printf("\n");
	for(i=0;i<adet;i++){
		printf("%s %s -> %.3f\n",yarismaci1[i].ad,yarismaci1[i].soyad,yarismaci1[i].puan);
	}
	printf("\n");
	for(i=0;i<adet;i++){
		if(performans == yarismaci1[i].puan){
			printf("%s %s %.3f puan ile birinci olmustur.",yarismaci1[i].ad,yarismaci1[i].soyad,performans);
		}
	}
}

int main(){
	int i,y_sayisi;
	printf("Yarismaci sayisini giriniz: ");
	scanf("%d",&y_sayisi);
	struct Yarismaci yarismaci1[y_sayisi];
	for(i=0;i<y_sayisi;i++){
		printf("%d. yarismacinin adini giriniz: ",i+1);
		scanf("%s",&yarismaci1[i].ad);
		printf("Yarismacinin soyadini giriniz: ");
		scanf("%s",&yarismaci1[i].soyad);
	}
	bilgileri_bastir(hesapla(yarismaci1,y_sayisi),y_sayisi,yarismaci1);
	return 0;
}

