#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Araba{
	char marka[20];
	int deger;
	int beygir;
};

int main(){
	Araba araba1;
	araba1.deger = 75000;
	araba1.beygir = 114;
	strcpy(araba1.marka,"Toyota");
	printf("Arabanin markasi: %s\n",araba1.marka);
	printf("Arabanin degeri: %d\n",araba1.deger);
	printf("Arabanin beygir gucu: %d\n",araba1.beygir);
	return 0;
}

