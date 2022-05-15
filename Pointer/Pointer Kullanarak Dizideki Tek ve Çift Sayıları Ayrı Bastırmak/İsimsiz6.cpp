#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	int dizi[20],i;
	srand(time(0));
	for(i=0;i<20;i++){
		*(dizi+i) = rand()%100;
	}
	printf("Dizi: ");
	for(i=0;i<20;i++){
		printf("%d  ",*(dizi+i));
	}
	printf("\nDizideki tek sayilar: ");
	for(i=0;i<20;i++){
		if(*(dizi+i)%2 == 1){
			printf("%d  ",*(dizi+i));
		}
	}
	printf("\nDizideki cift sayilar: ");
	for(i=0;i<20;i++){
		if(*(dizi+i)%2 == 0){
			printf("%d  ",*(dizi+i));
		}
	}
	return 0;
}

