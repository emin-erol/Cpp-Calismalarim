#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	int i,j,gecici,dizi[10];
	srand(time(0));
	printf("Dizinin ilk hali: ");
	for(i=0;i<10;i++){
		*(dizi+i) = rand()%100;
		printf("%d  ",*(dizi+i));
	}
	for(i=5,j=4;i<10,j>=0;i++,j--){
		gecici = *(dizi+i);
		*(dizi+i) = *(dizi+j);
		*(dizi+j) = gecici;
	}
	printf("\nDizinin yer degistirmis hali: ");
	for(i=0;i<10;i++){
		printf("%d  ",*(dizi+i));
	}
	return 0;
}

