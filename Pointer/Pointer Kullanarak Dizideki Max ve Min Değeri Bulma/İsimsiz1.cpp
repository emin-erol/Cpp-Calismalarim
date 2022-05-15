#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	int i,j,dizi[10],maks,min;
	srand(time(0));
	printf("Olusturulan dizinin elemanlari:\n");
	for(i=0;i<10;i++){
		dizi[i] = rand()%100;
		printf("%d  ",dizi[i]);
	}
	maks = min = *dizi;
	for(i=0;i<10;i++){
		if(*(dizi+i) > maks) maks = *(dizi+i);
		if(*(dizi+i) < min) min = *(dizi+i);
	}
	printf("\nEn buyuk eleman: %d",maks);
	printf("\nEn kucuk eleman: %d",min);
	return 0;
}

