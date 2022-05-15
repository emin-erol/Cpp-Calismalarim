#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Sayilar{
	int a;
	union Eklemeler{
		char karakter;
		float reel;
	}ekle;
};

int main(){
	Sayilar sayi;
	printf("Bir tamsayi giriniz: ");
	scanf("%d",&sayi.a);
	if(sayi.a == 1){
		printf("Bir karakter giriniz: ");
		scanf("%s",&sayi.ekle.karakter);
		printf("%c",sayi.ekle.karakter);
	}
	else if(sayi.a == 0){
		printf("Bir reel sayi giriniz: ");
		scanf("%f",&sayi.ekle.reel);
		printf("%f",sayi.ekle.reel);
	}
	else {
		printf("0 ve 1 den farkli bir sayi girdiniz.");
	}
	return 0;
}

