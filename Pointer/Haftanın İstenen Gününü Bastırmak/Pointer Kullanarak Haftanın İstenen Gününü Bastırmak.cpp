#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
	int a;
	char *haftanin_gunleri[7] = {"Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi","Pazar"};
	do {
		printf("Lutfen 1 ile 7 arasinda bir sayi giriniz: ");
		scanf("%d",&a);
	}while(a < 1 || a > 7);
	printf("Secilen gun: %s",haftanin_gunleri[a-1]);
	return 0;
}

